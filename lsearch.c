#include <stdio.h>
void main()
{
int i,n,b,count=0,s=0;
count++;
count++;
int a[50];
count++;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0; i<n; i++)
{
count++;
scanf("%d",&a[i]);
}
count++;
printf("Enter the element to be searched\n");
scanf("%d",&b);
for(i=0; i<n; i++)
{
count++;
if(a[i]==b)
{
count++;
printf("Element found in index position %d of array",i+1);
break;
}
}
count++;
if(i==n)
{
count++;
printf("Element not found");
}
s=20+(4*n);
count++;
printf("\nTime Complexity= %d",count);
printf("\nSpace Complexity= %d",s);
}
