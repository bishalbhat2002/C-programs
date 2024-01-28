// program to enter record if n emloyee ( name, address, age, salary) display average salary of employees.

#include <stdio.h>
struct employee
{
    char name[20], address[30];
    int age;
    float salary;
};
int main()
{
    int i, n;
    float total = 0, avg;
    struct employee e[100];
    printf("Enter how many employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        getchar();
        printf("\nEnter the record of %d employee: \n", i + 1);
        printf("Name of employee : ");
        gets(e[i].name);
        printf("Enter address of employee : ");
        gets(e[i].address);
        printf("Enter age of employee : ");
        scanf("%d", &e[i].age);
        printf("Enter salary of employee : ");
        scanf("%fz", &e[i].salary);
    }
    for (i = 0; i < n; i++)
        total = total + e[i].salary;
    avg = total / n;
    printf("\nThe average salary is %f.\n", avg);

    return 0;
}
