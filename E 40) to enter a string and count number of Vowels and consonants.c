// Program To enter a string and display the number of vowels and consonants in it.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i, nv = 0, nc = 0;
    printf("Enter a string\n");
    gets(str);
    strupr(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            nv++;
        else
            nc++;
    }
    printf("The number of Vowels in string entered is %d.\n", nv);
    printf("The number of consonants in string entered is %d.\n", nc);
    return 0;
}