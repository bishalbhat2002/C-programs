// Program to display right hand triangle with continous number

#include <stdio.h>
int main() 
{
   int i, j, n, temp = 1;
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
           printf("%d \t",temp);
           temp++;
       }
       printf("\n");
   }
   return 0;
}