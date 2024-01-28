// Program to enter 2 matrices and display their sum.

#include <stdio.h>
int main()
{
    int i, j, k, a[3][3], b[3][3], sum[3][3];
    printf("Enter the elements of first matrix\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the elements of second matrix\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    printf("\nDisplaying the first matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("\nDisplaying the second matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", b[i][j]);
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nDisplaying the Sum of 2 matrices\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }
    return 0;
}
