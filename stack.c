#include <stdio.h>
int push();
int pop();
int display();
int top=-1,a[10];
int size;
int main()
{
int choice;
printf("Enter the maximum size of the stack: ");
scanf("%d",&size);
while(1)
{
printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
printf("\nEnter the Choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
	push();
	break;
}
case 2:
{
	pop();
	break;
}
case 3:
{	
	display();
        break;
}
case 4:
	return 0;
default:
{
printf("Choice is Invalid");
}
}
}
}
int push()
{
int x;
if(top==size-1)
{
printf("Stack Overflow");
}
else
{
printf("Enter the element: ");
scanf("%d",&x);
top=top+1;
a[top]=x;
}
}

int pop()
{
int x;
if(top==-1)
{
printf("Stack Underflow");
}
else
{
x=a[top];
top=top-1;
printf("Deleted element is %d",x);
}
}

int display()
{
int i;
for(i=top; i>=0; i--)
{
printf("%d",a[i]);
printf("\n");
}
}




