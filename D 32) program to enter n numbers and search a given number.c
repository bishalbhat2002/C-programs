// program to enter n numbers in an array and find a given number's index.

#include <stdio.h>

int main()
{
    int num[100], n, i, large, no;
    printf("Enter how many numbers you want to enter : ");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    printf("Enter the number to be searched : ");
    scanf("%d", &no);

    for (i = 0; i < n; i++)
    {
        if (num[i] == no)
            break;
    }
    if (i == n)
        printf("The number %d is not on the list.\n", no);
    else
        printf("The number %d is in the list at %d th index.", no, i);
    return 0;
}