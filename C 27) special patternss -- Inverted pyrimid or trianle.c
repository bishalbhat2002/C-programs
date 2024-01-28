// Program to display the inverted pyramid or tirnagle.c

#include <stdio.h>
int main() 
{
   int i, j, n;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i = 1; i <= n; i++) 
   {
      for (j = 1; j <= 2*n-1; j++)
      {
          if(j>=i && j<=2*n-i)
         printf("*\t");
         else
         printf("\t");
      }
      printf("\n\n"); 
   }
   return 0;
}