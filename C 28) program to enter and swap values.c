// Program to swap the values of 2 variables.
#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter any 2 numbers\n");
    scanf("%d %d", &a, &b);
    printf("Values before exchange\n");
    printf("a : %d, b : %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Values After exchange\n");
    printf("a : %d, b : %d", a, b);
    return 0;
}