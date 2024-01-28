// Program to display sum of following series..
// 1 + x square + 2x square + 3x square + 4x square + ... + nx square.

#include <stdio.h>

int main()
{
    int i, x, n, sum = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of x : ");
    scanf("%d", &x);
    sum = 1 + x * x;
    for (i = 2; i <= n; i++)
        sum = sum + i * x * x;
    printf("Sum of series is %d.\n", sum);
    return 0;
}