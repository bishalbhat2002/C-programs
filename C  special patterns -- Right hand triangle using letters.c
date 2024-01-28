// program to display letters in right hand triangle.
// same letter in Row only..
// #include <stdio.h>
// int main() {
//    int i, j, upperlimit;
//    char input, alphabet = 'A';
//    printf("Enter an uppercase character you want to print in the last row: ");
//    scanf("%c", &input);
//    upperlimit = (int)(input)-(int)(alphabet);
   
//    for (i = 0; i <= upperlimit; i++)
//    {
//       for (j = 0; j <= i; j++) 
//       {
//          printf("%c ", alphabet);
//       }
//       alphabet++;
//       printf("\n");
//    }
//    return 0;
// }


// program to display letters in right hand triangle.
// same letter in column only..

#include <stdio.h>
int main() {
   int i, j, upperlimit;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last column: ");
   scanf("%c", &input);
   upperlimit = (int)(input)-(int)(alphabet);
   
   for (i = 0; i <= upperlimit; i++)
   {
      for (j = 0; j <= i; j++) 
      {
         printf("%c ", (char)(65+j) );    // 65 is added because integer value of A = 65 
      }
      alphabet++;
      printf("\n");
   }
   return 0;
}
