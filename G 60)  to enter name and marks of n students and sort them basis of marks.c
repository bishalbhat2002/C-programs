// enter name and marks of students and sort them according to their marks. (higher marks to lower marks)
// structure program

#include <stdio.h>
#include <string.h>

struct student
{
    char name[30];
    int marks;
};

int main()
{
    int i, n, j;
    struct student s[100], temp;

    printf("Enter how many no. of student data you want to enter: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        getchar(); // getchar() added because the program was skipping the name and marks input...
        printf("Enter name of student %d :  ", i + 1);
        gets(s[i].name);

        printf("Enter marks of %s : ", s[i].name);
        scanf("%d", &s[i].marks);
    }

    printf("\nDisplaying data before sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d  %s : %d \n", i + 1, s[i].name, s[i].marks);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].marks < s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nDisplaying data after sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d  %s : %d \n", i + 1, s[i].name, s[i].marks);

    return 0;
}
