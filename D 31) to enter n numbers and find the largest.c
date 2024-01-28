// Program to enter n numbers in an array and display the largest..

#include <stdio.h>

int main()
{
    int num[100], n, i, large;
    printf("Enter how many numbers you want to enter : ");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    large = num[0];
    for (i = 1; i < n; i++)
    {
        if (large < num[i])
            large = num[i];
    }
    printf("largest number among given %d numbers is %d.\n ", n, large);
    return 0;
}