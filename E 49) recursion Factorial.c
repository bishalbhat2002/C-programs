// Program to enter and display the factorial of number using recursion.

#include <stdio.h>
int factorial(int); // function prototype
int main()
{
    int num, f;
    printf("Enter a number : ");
    scanf("%d", &num);
    f = factorial(num); // function call
    printf("The factorial of %d is %d.\n", num, f);
    return 0;
}
int factorial(int n) // function definition
{
    int i, fact = 1;
    if (n == 0 || n == 1) // Base condition
        return fact;
    else
        return (n * factorial(n - 1)); // function calling itself
}