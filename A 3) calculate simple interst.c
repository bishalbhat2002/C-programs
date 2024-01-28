// program to enter principal, time & Rate and then display the simple interest

#include <stdio.h>
int main()
{
    int p;
    float t, r, I;
    printf("enter principle,Time and rate\n");
    scanf("%d%f%f", &p, &t, &r);
    I = (p * t * r) / 100;
    printf("Simple Interest : %f \n", I);
    return 0;
}
