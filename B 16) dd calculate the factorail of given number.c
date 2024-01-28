// program to enter a number and display its factorial.

#include <stdio.h>
int main()
{
	int n, fact = 1, a;
	printf("enter a number\n");
	scanf("%d", &n);
	a = n;
	if (n == 0 || n == 1)
		printf("factorial of %d is %d\n", n, fact);
	else
	{
		while (n > 0)
		{
			fact = fact * n;
			n = n - 1;
		}
		printf("factorial of %d is %d\n", a, fact);
	}
	return 0;
}
