#include <stdio.h>
int main()
{
int i,j,n,a[50],search,left,right,mid,temp,count=0,s;
count+2;
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0; i<n; i++)
{
count++;
scanf("%d",&a[i]);
}
count++;
for(i=0; i<n;i++)
{
count++;
for(j=0;j<n-i-1;j++ )
{
count++;
if(a[j]>a[j+1])
{
count++;
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
count++;
}
count++;
printf("The numbers in ascending order are \n");
for(i=0; i<n; i++)
{
count++;
printf("%d",a[i]);
printf("\t");
}
count++;
printf("\nEnter the element to be searched\n");
scanf("%d",&search);
left=0;
right=n-1;
count+2;
mid=(left+right)/2;
while(left<=right)
{
count++;
if(a[mid]<search)
{
count++;
left=mid+1;
count++;
}
else if (a[mid]==search)
{
count++;
printf("%d is found at location %d", search,mid+1);
break;
}
else
right=mid-1;
mid=(left+right)/2;
count+2;
}
if(left>right)
{
count++;
printf("%d not found",search);
}
s=36+(4*n);
count++;
printf("\n Time complexity is %d",count);
printf("\n Space complexity is %d",s);
return 0;
count++;
}
