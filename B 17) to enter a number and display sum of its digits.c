// Program to enter a number and display sum of its digits..

#include <stdio.h>

int main()
{
    int n, original, rem, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n); // while loop initialization
    original = n;
    while (n > 0) // while loop condition
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10; // step over
    }

    printf("Sum of digits of %d is %d \n", original, sum);
    return 0;
}