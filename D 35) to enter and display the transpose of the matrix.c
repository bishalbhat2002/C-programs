
// Program to enter a matrix and display its transpose..

#include <stdio.h>
int main()
{
    int mat[3][4], i, j;
    printf("enter the elements of matrix\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &mat[i][j]);

    printf("displaying the matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }

    printf("Displaying the transpose of the matrix \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d \t", mat[j][i]);
        printf("\n");
    }
    return 0;
}
