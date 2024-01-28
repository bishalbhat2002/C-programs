// program to enter a string and display it.

#include <stdio.h>

int main()
{
    char str[30];
    printf("Enter a string:\n");
    gets(str);
    printf("The string you entered is: \n");
    puts(str);
    return 0;
}

 /*
        function has been removed from c langauge because it it creates
        buffer overflow. So, insted of gets() we use fgets() to take
        string input from user.
        The syntax of fgets() function is at the end of this program.
    */
    //fgets(str, sizeof(str), stdin);
    
/*
    syntax of fgets() function:

    fgets(string_variable, sizeof(string_variable), stdin);
    --> first argument is for specifying which variable will be used to store string value.
    --> second argument is integer value, specifying the size of variable.
    --> third argument is for specifying to take input from keyboard.
*/