#include <stdio.h>
void main()
{
int i,j,n,s,a[100],temp,c=0;
c++;
c++;
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0; i<n; i++)
{
c++;
scanf("%d",&a[i]);
}
c++;
for(i=0; i<n-1; i++)
{
c++;
for(j=0; j<n-i-1; j++)
{
c++;
if(a[j]>a[j+1])
{
c++;
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
c++;
}
c++;
printf("Sorted array is\n");
for(i=0; i<n; i++)
{
c++;
printf("%d",a[i]);
printf("\t");
}
c++;
s=24+(4*n);
printf("\nTime complexity is %d",c);
printf("\nSpace complexity is %d",s);
}
