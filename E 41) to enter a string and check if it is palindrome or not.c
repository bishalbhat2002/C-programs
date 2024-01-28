// Program to enter a string and check if it is palindrome or not without using string manipulating functions...

#include <stdio.h>

int main()
{
    char str[50], temp[50], flag = 1;
    int n = 0, i, j;
    printf("Enter a string.\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
        n++;
    for (i = n - 1, j = 0; i >= 0; i--, j++)
        temp[j] = str[i];
    temp[j + 1] = '\0';
    printf("Entered string is given below.\n");
    puts(str);
    printf("Displaying the reverse of string.\n");
    puts(temp);

    // Program part to check if the string is palindrome or not.
    for (i = 0; i < n; i++)
    {
        if (str[i] != temp[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Entered string is palindrome !\n");
    else
        printf("Entered string is not palindrome !\n");
    return 0;
}