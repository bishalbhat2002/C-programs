// display the sum of first n natural numbers
#include <stdio.h>
int main()
{
	int n, sum = 0, i;
	printf("enter the number of natural numbers : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		sum = sum + i;
	printf("The sum of first %d natural numbers : %d \n", n, sum);
	return 0;
}
