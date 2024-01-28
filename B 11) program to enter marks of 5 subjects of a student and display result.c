// program to enter marks of 5 subjects of a student and display
// result the student.

#include <stdio.h>

int main()
{
    int eng, math, phy, chem, com, sum = 0;
    float percentage;
    printf("Enter marks of 5 subjetcs\n");
    scanf("%d %d %d %d %d", &eng, &math, &phy, &chem, &com);
    sum = eng + math + phy + chem + com;
    percentage = sum / 5;

    if (eng < 35 || math < 35 || phy < 35 || chem < 35 || com < 35)
        printf("Fail");
    else
    {
        if (percentage >= 80)
            printf("Pass with distinction\n");
        else if (percentage >= 60)
            printf("Pass with 1st division\n");
        else if (percentage >= 45)
            printf("Pass with 2nd division\n");
        else
            printf("Pass with 3rd division\n");
    }
    return 0;
}