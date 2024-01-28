// Program to enter enter 3 numbers and display the largest number among them.

#include <stdio.h>
int main()
{
    int a, b, c, largest;
    printf("enter any three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        largest = a;
    else if (b > a && b > c)
        largest = b;
    else
        largest = c;
    printf("the largest number is %d.\n", largest);
    return 0;
}
