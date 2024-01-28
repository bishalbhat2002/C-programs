// program demonstrating the use of string manipulating functions.

#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    char str1[45], str2[45], temp[45];
    printf("\nPROGRAM FOR DEMONSTRATING STRING MANIPULATING FUNCTIONS:\n");
    printf("Enter first String\n");
    gets(str1);

    printf("Enter Second String\n");
    gets(str2);

    printf("\nThe string you entered are:\n");
    printf("first string : %s \n", str1);
    printf("second string : %s \n", str2);
    printf("\n");

    // program part for displaying the length of string
    // or, display the number of character in the string.
    printf("Displaying the length of string values: \n");
    num = strlen(str1);
    printf("The size of first string is %d byte (or, characters).\n", num);
    num = strlen(str2);
    printf("The size of second string is %d byte (or, characters).\n", num);
    printf("\n");

    // program to copy value of one string variable into another.
    printf("Copying the value of one string variable to another:\n");
    strcpy(temp, str1);
    printf("The copied string to temp string variable is : ");
    puts(temp);
    printf("\n");

    // program part for making all the characters of string all capital letters.
    printf("To make string value all capital letters:\n");
    strupr(str1);
    printf("All Capatalized string is : ");
    puts(str1);
    printf("\n");

    // program part for making all the characters of string all Small letters.
    printf("To make string value all small letters:\n");
    strlwr(str1);
    printf("All Small letter string is : ");
    puts(str1);
    printf("\n");

    // program part for reversing the string.
    printf("To make string value reversed :\n");
    strcmp(temp, str1); // copies str1 value into temp variable.
    strrev(temp);
    printf("The actual string value : %s \n", str1);
    printf("The reversed string value : %s \n", temp);
    printf("\n");

    // program part to combine values of 2 string variable.
    printf("To combine 2 string values into one string variable :\n");
    strcpy(temp, str1);
    strcat(temp, str2);
    printf("The combined string value is given below.\n");
    puts(temp);
    printf("\n");

    // program part to compare value of 2 string variables.
    printf("To compare 2 string variables :\n");
    num = strcmp(str1, str2);
    if (num == 0)
        printf("Both strings are same\n");
    else if (num > 0)
        printf("first string is greater than second string !\n");
    else
        printf("Second string is greater then first string ! \n");

    return 0;
}