// Program to enter name, address and salary of n employees and display information
// of each employees in ascending order according to their name.
// structure program..

#include <stdio.h>
#include <string.h>
struct employee
{
    char name[25], address[35];
    float salary;
};
int main()
{
    struct employee e[100], temp;
    int n, i, j;
    printf("Enter how many employees data you want to enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        getchar();
        printf("\n --> Enter the data of %d employee : \n", i + 1);
        printf("Enter name : ");
        gets(e[i].name);
        printf("Enter address : ");
        gets(e[i].address);
        printf("Enter salary : ");
        scanf("%f", &e[i].salary);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(e[i].name, e[j].name) > 0)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    printf("\nDisplaying the information in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d employee details:\n", i + 1);
        printf("\tName : %s,\t Address : %s, \t Salary : %f.\n", e[i].name, e[i].address, e[i].salary);
    }
    return 0;
}