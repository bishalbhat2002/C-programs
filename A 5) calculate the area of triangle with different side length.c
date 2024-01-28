// program to enter 3 sides of a triangle and display its area

#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, area, s;
	printf("enter the length of sides of triangle\n");
	scanf("%f %f %f", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("area of triangle : %f", area);
	return 0;
}
