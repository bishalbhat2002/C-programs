// to enter record of student( roll no, name, marks in 5 subjects)
// and display roll no, name, total marks, and average marks.

#include <stdio.h>
struct student
{
    int roll_no, marks[5];
    char name[25];
};

int main()
{
    struct student s;
    int i, total = 0;
    float avg;
    printf("Enter roll no : ");
    scanf("%d", &s.roll_no);
    getchar(); // getchar() added here because the program wasnt waiting
               // for taking name as input...
    printf("Enter the name : ");
    gets(s.name);
    printf("Enter marks in 5 subjets:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &s.marks[i]);

    for (i = 0; i < 5; i++)
        total = total + s.marks[i];
    avg = total / 5;

    printf("\nDisplaying the information:\n");
    printf("Roll no. : %d \n", s.roll_no);
    printf("Name : %s \n", s.name);
    printf("Total : %d \n", total);
    printf("average : %f \n", avg);

    return 0;
}