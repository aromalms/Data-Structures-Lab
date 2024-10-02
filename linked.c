#include <stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
void display();
void insert_beg();
void inset_end();
void insert_pos();
void delete_beg();
void delete_end();
void delete_pos();
struct node* head=NULL;
struct node* temp;
struct node* ptr;
void insert_beg()
{	
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the item: ");
	scanf("%d",&temp->data);	
	if(head==NULL)
	{
	head=temp;
	return;
	}
	else
	{
	temp->link=head;
	head=temp;
	}
}

void insert_end()
{	
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the item: ");
	scanf("%d",&temp->data);	
	if(head==NULL)
	{
	head=temp;
	return;
	}
	else
	{
	ptr=head;
	while(ptr->link!=NULL)
	{
	ptr=ptr->link;
	}
	ptr->link=temp;
	}
}

void insert_pos()
{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the item: ");
	scanf("%d",&temp->data);	
	if(head==NULL)
	{
	head=temp;
	return;
	}
	else
	{
	ptr=head;
	struct node* ptr1;
	int pos;
	printf("Enter the position: ");
	scanf("%d",&pos);
	for(int i=0; i<pos; i++)
	{
	ptr1=ptr;
	ptr=ptr->link;
	}
	temp->link=ptr;
	ptr1->link=temp;
	}
}

void delete_beg()
{
	if(head==NULL)
	{
		printf("\nLineked list is empty");
		return;
	}
	else
	{
	ptr=head;
	head=head->link;
	free(ptr);
	printf("Element is Deleted");
	}
}

void delete_end()
{
	if(head==NULL)
	{
		printf("\nLinked list is empty");
		return;
	}
	else if(head->link==NULL)
	{
	printf("Element is Deleted");
	ptr=head;
	head=ptr->link;
	free(ptr);
	}
	else 
	{
	ptr=head;
	struct node* ptr1=NULL;
	while(ptr->link!=NULL)
	{
	ptr1=ptr;
	ptr=ptr->link;
	}
	ptr1->link=NULL;
	free(ptr);
	}
}

void delete_pos()
{
int pos;
printf("Enter the position: ");
scanf("%d",&pos);
	ptr=head;
	if(head==NULL)
	{
	printf("\nLinked list is empty");
	return;
	}
		else if(pos==0)
		{
		ptr=head;
		head=ptr->link;
		free(ptr);
	}
	else
	{
	struct node* ptr1;
	for(int i=0; i<pos; i++)
	{
	ptr1=ptr;
	ptr=ptr->link;
	}
	ptr1->link=ptr->link;
	free(ptr);
	}
}

void display()
{
if(head==NULL)
	{
	printf("\n**Linked list is empty**");
	return;
	}
	ptr=head;
	while(ptr!=NULL)
	{
	printf("\t%d",ptr->data);
	ptr=ptr->link;
	}
	printf("\n");
}

int main()
{
int choice;
while(1)
{
printf("\n1.Display");
printf("\n2.Insertion at beginning");
printf("\n3.Insertion at end");
printf("\n4.Insertion at any position");
printf("\n5.Deletion at beginning");
printf("\n6.Deletion at end");
printf("\n7.Deletion at any position");
printf("\n8.Exit");
printf("\nEnter the Choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
	display();
	break;
}
case 2:
{
	insert_beg();
	break;
}
case 3:
{	
	insert_end();
        break;
}
case 4:
{	
	insert_pos();
        break;
}
case 5:
{	
	delete_beg();
        break;
}
case 6:
{	
	delete_end();
        break;
}
case 7:
{	
	delete_pos();
        break;
}
case 8:
	return 0;
default:
{
printf("Choice is Invalid...! RETRY..");
}
}
}
}

