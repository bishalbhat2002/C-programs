// program to display first n natural numbers.
#include <stdio.h>
int main()
{
	int n, i;
	printf("enter how many natural numbers you want : ");
	scanf("%d", &n);
	printf("The first %d natural numbers are\n", n);
	for (i = 1; i <= n; i++)
		printf("%d \n", i);
	return 0;
}
