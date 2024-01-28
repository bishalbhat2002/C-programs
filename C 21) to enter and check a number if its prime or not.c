// Program to enter a number and check if its prime or not....

#include <stdio.h>
int main()
{
	int i, n;
	printf("enter a number\n");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
			break;
	}
	if (n == i)
		printf("%d is prime number\n", n);
	else
		printf("%d is not prime number\n", n);
	return 0;
}
