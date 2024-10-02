#include <stdio.h>
int main() 
{
   int i, j,n,s,position, swap,c=0;
   int arr[50];
   c++;
   c++;
   printf("Enter the size of array\n");
   scanf("%d",&n);
   printf("Enter the elements\n");
   for(i=0; i<n; i++)
   { c++;
       scanf("%d",&arr[i]);
   }
    c++;
   for (i = 0; i < (n - 1); i++) 
   {     c++;
      position = i;
      for (j = i + 1; j < n; j++) 
      {
           c++;
         if (arr[position] > arr[j])
            { c++;
            position = j;
            }
      }
       c++;
      if (position != i) 
      {     c++;
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   c++;
    printf("Sorted array is:\n ");
   for (i = 0; i < n; i++)
   {c++;
      printf("%d\t", arr[i]);
   }
   c++;
   s=28+(4*n);
   printf("\nTime complexity=%d\n",c);
   printf("Space complexity=%d",s);
   return 0;
}
