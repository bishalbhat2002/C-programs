// structure introduction program.
// enter an employee info( employee ID, name, salary, Gender) and display them.

#include <stdio.h>
struct employee
{
    int eid;
    char name[25], gender;
    float salary;
};
int main()
{
    struct employee e;
    printf("Enter Id of employee : ");
    scanf("%d", &e.eid);
    getchar();
    printf("Enter name of employee : ");
    gets(e.name);
    printf("Enter salary of employee : ");
    scanf("%f", &e.salary);
    getchar();
    printf("Enter gender of employee : ");
    scanf("%c", &e.gender);

    printf("\nDisplaying the Employee information:\n");
    printf("Employee ID : %d \n", e.eid);
    printf("Name : %s \n", e.name);
    printf("Gender : %c \n", e.gender);
    printf("Salary : %f \n", e.salary);
    return 0;
    // getch();
}