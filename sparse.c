#include <stdio.h>
void main()
{
int i,j,m,n;
int a[50][50];
int b[50][50];
printf("Enter the number of rows:");
scanf("%d",&m);
printf("Enter the number of columns:");
scanf("%d",&n);
printf("Enter the matrix");
for(i=0; i<m; i++)
{
for(j=0; j<m; j++)
{
scanf("%d",&a[i][j]);
}
}
b[0][0]=m;
b[0][1]=n;
int k=1;
for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
{
if(a[i][j]!=0)
{
b[k][0]=i;
b[k][1]=j;
b[k][2]=a[i][j];
k++;
}
}
}
b[0][2]=k-1;
printf("Representation is \n");
for(i=0; i<k; i++)
{
for(j=0; j<3; j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
}

