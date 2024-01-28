// Program to display even numbers upto n.

#include <stdio.h>
int main()
{
	int i, n;
	printf("enter a number\n");
	scanf("%d", &n);
	for (i = 0; i <= n; i = i + 2)
		printf("%d \n", i);
	return 0;
}
