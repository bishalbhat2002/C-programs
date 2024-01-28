// Program to enter the name of n student and sort them in alphabetical order.

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100][30], temp[30];
    int i, j, n;
    printf("Enter how many students name you want to enter : ");
    scanf("%d", &n);
    printf("Enter name of %d students:\n", n);
    for (i = 0; i < n; i++)
    {
        gets(name[i]);
    }

    printf("\nDisplaying names before sorting as below.\n");
    for (i = 0; i < n; i++)
    {
        puts(name[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nDisplaying names after sorting as below.\n");
    for (i = 0; i < n; i++)
    {
        puts(name[i]);
    }

    return 0;
}