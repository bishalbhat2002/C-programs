// type conversion in C programming..
// type conversion means converting one type of data into anoter type..
// we can convert one type of basic data type into another type of basic data type.
// i.e. we can convert char data type into int, int into char, float into int, etc.

// the syntax for basic data type conversion is given below..

// (data_type)(variable_name);

#include <stdio.h>

int main()
{
    int x = 89;
    char alphabet = 'B';
    float price = 67.3;
    printf("\n --> OUTPUT TO DEMONSTRATE TYPE CONVERSION IN C PROGRAMMING:\n");
    printf("Integer Value %d into character = %c \n", x, (char)(x));
    printf("Character Value %c into integer = %d \n", alphabet, (int)(alphabet));
    printf("Float value %f into Value integer = %d \n", price, (int)(price));
    printf("Float Value %f into character = %c \n", price, (char)(price));
    // during conversion from float to character this process happens:
        // --> first float is converted into integer value, and then
        //     the integer value is converted into character value...

    return 0;
}