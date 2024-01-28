// Program to enter a number and display its reverse and then check if its palindrome or not...

#include <stdio.h>
int main()
{
	int i, n, rev = 0, rem, org;
	printf("enter a number\n");
	scanf("%d", &n);
	org = n;
	printf("you entered %d\n", org);
	while (n > 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	printf("the reverse of %d = %d\n", org, rev);

	if (rev == org)
		printf("Palindrome !!\n");
	else
		printf("Not palindrome !!\n");

	return 0;
}
