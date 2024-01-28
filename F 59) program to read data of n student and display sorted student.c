// Program to enter data of student (name, roll number, marks in 5 subjests)
// and display the data of student in ascending order according to total
// marks obtained by student..
// here, ascending means :: lowest total marks to highest total marks..

#include <stdio.h>
struct student
{
    char name[30];
    int roll;
    int marks[5];
    int total;
};

int main()
{
    struct student s[100], temp;
    int i, j, n;
    printf("Enter how many stydents : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        printf("\n--> Enter the data of %d student:\n", i + 1);
        getchar();
        printf("Enter name of student : ");
        gets(s[i].name);
        printf("Enter roll number : ");
        scanf("%d", &s[i].roll);
        printf("Enter marks in 5 subjects : \n");
        for (j = 0; j < 5; j++)
            scanf("%d", &s[i].marks[j]);
    }
    for (i = 0; i < n; i++)
    {
        s[i].total = 0;
        for (j = 0; j < 5; j++)
            s[i].total = s[i].total + s[i].marks[j];
    }
    for (i = 0; i < n - 1; i++) // selection sorting algorith.
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].total > s[j].total)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\nDisplaying data after sorting by total marks obtained:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d. student data:\n", i + 1);
        printf("\tName : %s, \t Roll no. : %d, \t Total marks : %d\n", s[i].name, s[i].roll, s[i].total);
    }
    return 0;
}