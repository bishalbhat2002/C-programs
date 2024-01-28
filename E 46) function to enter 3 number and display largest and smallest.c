// c program to enter 3 numbers and display largest and smallest using function.

#include <stdio.h>
int largest(int, int, int);
int smallest(int, int, int);
int main()
{
    int a, b, c, large, small;
    printf("Enter any 3 numbers.\n");
    scanf("%d%d%d", &a, &b, &c);
    large = largest(a, b, c);
    small = smallest(a, b, c);
    printf("The largest number among %d, %d, & %d is %d.\n", a, b, c, large);
    printf("The smallest number among %d, %d, & %d is %d.\n", a, b, c, small);
    return 0;
}
int largest(int x, int y, int z)
{
    int large;
    if (x > y && x > z)
        large = x;
    else if (y > x && y > z)
        large = y;
    else
        large = z;
    return large;
}

int smallest(int x, int y, int z)
{
    int small;
    if (x < y && x < z)
        small = x;
    else if (y < x && y < z)
        small = y;
    else
        small = z;
    return small;
}
