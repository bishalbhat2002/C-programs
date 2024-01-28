// Program to enter radius and display area & perimeter of a circle

#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    int radius;
    float area, perimeter;
    printf("enter the radius of the cirle : ");
    scanf("%d", &radius);
    area = pi * pow(radius, 2);
    perimeter = 2 * pi * radius;

    printf(" Area of circle : %f \n Perimeter of circle : %f \n", area, perimeter);
    return 0;
}
