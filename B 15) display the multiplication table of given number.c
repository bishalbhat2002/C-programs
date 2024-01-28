// To enter a number and display its multiplication table.

#include <stdio.h>
int main()
{
	int n, i;
	printf("enter the number\n");
	scanf("%d", &n);
	printf("the multiplication table of %d is given below\n", n);
	for (i = 1; i <= 10; i++)
		printf("%d * %d = %d \n", n, i, n * i);
	return 0;
}
