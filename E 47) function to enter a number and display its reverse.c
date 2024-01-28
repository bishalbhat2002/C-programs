// Program to enter a number and display its reverse..
// check if it is palindrome or not.
// using function.

#include <stdio.h>
int reverse(int);
void check_palindrome(int, int);
int sum_of_digits(int);
int main()
{
    int num, rev, sum;
    printf("Enter a number : ");
    scanf("%d", &num);
    rev = reverse(num);
    sum = sum_of_digits(num);
    printf("The reverse of %d is %d.\n", num, rev);
    printf("The sum of digits of %d is %d.\n", num, sum);
    check_palindrome(num, rev);
    return 0;
}
int reverse(int x)
{
    int rem, rev = 0;
    while (x > 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    return rev;
}
int sum_of_digits(int y)
{
    int sum = 0, rem;
    while (y > 0)
    {
        rem = y % 10;
        sum = sum + rem;
        y = y / 10;
    }
    return sum;
}
void check_palindrome(int org, int rev)
{
    if (org == rev)
        printf("%d is palindrome number.\n", org);
    else
        printf("%d is not palindrome number.\n");
}