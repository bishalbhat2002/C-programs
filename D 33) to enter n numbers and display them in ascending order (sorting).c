// Program to enter n numbers and sort them in ascending order

#include <stdio.h>
int main()
{
	int num, n[50], i, j, temp;
	printf("enter how many number\n");
	scanf("%d", &num);
	printf("enter %d numbers\n", num);
	for (i = 0; i < num; i++)
		scanf("%d", &n[i]);
	printf("displaying the numers before sorting\n");
	for (i = 0; i < num; i++)
		printf("%d \n", n[i]);
	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (n[i] > n[j])
			{
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	printf("displaying the numbers after sorting\n");
	for (i = 0; i < num; i++)
		printf("%d\n", n[i]);

	return 0;
}
