// Program to enter a string and check if its palindrome or not...

#include <stdio.h>
#include <string.h>
int main()
{
	char name1[30], name2[30];
	printf("enter the name\n");
	gets(name1);
	strcpy(name2, name1);
	strrev(name2);
	if (strcmp(name1, name2) == 0)
		printf("%s is palindrome\n", name1);
	else
		printf("%s is not palindrome\n", name1);
	return 0;
}
