// Program to enter record of n students with name, roll number, faculty,
// DOB(date,month, yr), and display record of only students of CSIT faculty .

#include <stdio.h>
#include <string.h>
struct Date_of_birth
{
    int dd, mm, yy;
};
struct student
{
    char name[25], faculty[25];
    int roll;
    struct Date_of_birth DOB;
};
int main()
{
    int n, i;
    struct student s[100];
    printf("Enter how many student data you want to enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        getchar(); // getchar() used here because program was not waiting for
                   // taking input from us....
        printf("\n -->Enter the data of %d student:\n", i + 1);
        printf("Enter name : ");
        gets(s[i].name);
        printf("Enter roll number : ");
        scanf("%d", &s[i].roll);
        printf("Enter faculty : ");
        getchar();
        gets(s[i].faculty);
        printf("Enter date of birth:\n");
        printf("\tDay : ");
        scanf("%d", &s[i].DOB.dd);
        printf("\tMonth : ");
        scanf("%d", &s[i].DOB.mm);
        printf("\tYear : ");
        scanf("%d", &s[i].DOB.yy);
    }
    printf("\nThe details of students of CSIT faculty are:\n");
    for (i = 0; i < n; i++)
    {
        if (strcmp(s[i].faculty, "CSIT") == 0)
        {
            printf("\n\t Name : %s,", s[i].name);
            printf("\t Roll number : %d,", s[i].roll);
            printf("\t Faculty : %s,\n", s[i].faculty);
            printf("\t DOB-->");
            printf(" Day : %d  Month : %d  Year : %d \n", s[i].DOB.dd, s[i].DOB.mm, s[i].DOB.yy);
        }
    }
    return 0;
}