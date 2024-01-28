// progam to cleck whter the given nuber is odd or even
#include <stdio.h>
int main()
{
	int n;
	printf("enter the numer\n");
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("%d is even\n", n);
	else
		printf("%d is odd\n", n);
	return 0;
}
