// enter a number and display day name accordingly.

#include <stdio.h>
int main()
{
	int n;
	printf("enter a day number\n");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("Today is sunday\n");
		break;
	case 2:
		printf("Today is monday\n");
		break;
	case 3:
		printf("Today is tuesday\n");
		break;
	case 4:
		printf("Today is wednesday\n");
		break;
	case 5:
		printf("Today is thursday\n");
		break;
	case 6:
		printf("Today is friday\n");
		break;
	case 7:
		printf("Today is saturday\n");
		break;
	default:
		printf("you entered wrong number\n");
		break;
	}
	return 0;
}
