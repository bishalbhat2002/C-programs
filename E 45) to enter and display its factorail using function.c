// Program to enter a number and display its factorial using function.

#include <stdio.h>
int factorial(int);
int main()
{
    int n, f;
    printf("Enter a number : ");
    scanf("%d", &n);
    f = factorial(n);
    printf("The factorial of %d is %d.\n", n, f);
    return 0;
}

int factorial(int n)
{
    int i, fact = 1;
    if (n == 0 || n == 1)
        return (fact);
    else
    {
        for (i = 1; i <= n; i++)
            fact = fact * i;
        return (fact);
    }
}