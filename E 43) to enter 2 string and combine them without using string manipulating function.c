// Program to enter 2 strings and combine them without using string manipulating functions.

#include <stdio.h>

int main()
{
    int i, j;
    char str1[20], str2[30], str[50];
    printf("Enter first string.\n");
    gets(str1);
    printf("Enter second string.\n");
    gets(str2);
    i = 0;
    j = 0;
    printf("\nEntered string are:\n");
    printf("first : %s\n", str1);
    printf("second : %s\n", str2);
    while (str1[i] != '\0')
    {
        str[j] = str1[i];
        i++;
        j++;
    }
    str[j] = ' ';
    i = 0;

    while (str2[i] != '\0')
    {
        j++;
        str[j] = str2[i];
        i++;
    }
    str[j + 1] = '\0';

    printf("\nDisplaying the combined string as below.\n");
    puts(str);
    return 0;
}