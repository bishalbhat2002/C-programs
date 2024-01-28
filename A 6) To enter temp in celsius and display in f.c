// program to enter temperature in celsius and display temp in farenheit..

#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter temperature in celsius : ");
    scanf("%f", &c);
    f = (1.8 * c) + 32;
    printf("Temperature in farenheit : %f", f);
    return 0;
}