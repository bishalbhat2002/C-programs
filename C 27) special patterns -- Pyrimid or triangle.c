// Program to display the Pyramid or triangle..

#include <stdio.h>
int main()
{
  int i, j, n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=(2*n-1);j++)
      {
          if(j >= (n-i+1) && j <= (n+i-1))
              printf("*\t");
          else
              printf("\t");
      }
      printf("\n\n");   // 2 new line added because \t makes 1 tab gap and only
                        // new line makes the output doesnt look good..
  }
  return 0;
}