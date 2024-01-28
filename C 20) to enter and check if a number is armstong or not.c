// Program to check if the entered number is armstrong or not...
// armstrong number mean: abcd is said to be armstrong number if::
// abc = a cube + b cube + c cube + d cube..
// i.e product of all digit = sum of cube of each digits...

#include <stdio.h>
#include <math.h>
int main()
{
	int sum = 0, n, rem, org;
	printf("enter a number\n");
	scanf("%d", &n);
	org = n;
	while (n > 0)
	{
		rem = n % 10;
		sum = sum + pow(rem, 3);
		n = n / 10;
	}
	if (sum == org)
		printf("%d is armstrong\n", org);
	else
		printf("%d is not armstrong\n", org);
	return 0;
}
