// program to enter lengeth and breadth of rectangle and display its area

#include <stdio.h>
int main()
{
    int l, b, a, p;
    printf("enter length and breadth\n");
    scanf("%d%d", &l, &b);
    a = l * b;
    p = 2 * (l + b);
    printf("Area : %d \nPerimeter : %d \n", a, p);
    return 0;
}
