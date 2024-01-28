// program to enter n numbers in an array and display their sum..

#include <stdio.h>

int main()
{
    int num[100], n, i, sum = 0;
    printf("Enter how many numbers you want to enter : ");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for (i = 0; i < n; i++)
        sum = sum + num[i];
    printf("Sum of %d numbers is %d. \n", n, sum);
    return 0;
}