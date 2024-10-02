#include <stdio.h>
struct poly
{
int coeff;
int exp;
}p[10];

void main()
{
int i,n;
printf("Enter number of terms\n");
scanf("%d",&n);
printf("Enter coefficients and exponents of %d terms",n);
for(i=0; i<n; i++)
{
printf("\nEnter the coefficient\n");
scanf("%d",&p[i].coeff);
printf("Enter the exponent\n");
scanf("%d",&p[i].exp);
}
printf("Polynomial is \n");
for(i=0; i<n; i++)
{
printf("(%dx^%d)",p[i].coeff,p[i].exp);
printf("+");
}
}

	

