
// program to Enter a matrix and display it.

#include <stdio.h>
int main()
{
	int mat[3][3], i, j;
	printf("enter the elements of matrix\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &mat[i][j]);

	printf("displaying the matrix\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", mat[i][j]);
		printf("\n");
	}
	return 0;
}
