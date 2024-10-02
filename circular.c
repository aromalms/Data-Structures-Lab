#include <stdio.h>
int enqueue();
int dequeue();
int display();
int front=-1,rear=-1;
int queue[10];
int size;
int main()
{
int choice;
printf("Enter the maximum size of Queue: ");
scanf("%d",&size);
while(1)
{
printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
printf("\nEnter the Choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
enqueue();
break;
}
case 2:
{
dequeue();
break;
}
case 3:
{
display();
break;
}
case 4:
{
return 0;
}
default:
{
printf("Invalid Choice");
}
}
}
}

int enqueue()
{
int x;
if((rear+1)%size==front)
{
printf("Queue is Full");
}
else 
{
if(front==-1)
{
front=0;
}
{
printf("Enter the Element:");
scanf("%d",&x);
rear=rear+1%size;
queue[rear]=x;
}
}
}


int dequeue()
{
if(front==-1 || front==rear+1)
{
printf("Queue is Empty");
}
else if (front==rear)
{
front=-1;
rear=-1;
}
else
{
printf("Deleted Element is %d\n",queue[front]);
front=front+1%size;
}
}

int display()
{
int i;
for(i=front; i<=rear;i++)
{
printf("%d\t",queue[i]);
}
}

