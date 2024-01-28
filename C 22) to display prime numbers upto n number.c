// Program to display prime numbers upto n .....

#include <stdio.h>
int main()
{
	int i, n, j;
	printf("enter a number  upto where you want prime numbers : ");
	scanf("%d", &n);
	printf("\nThe prime numbers upto %d are given below.\n", n);
	for (i = 2; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d \n", i);
	}
	return 0;
}
