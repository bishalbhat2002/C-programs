// function call:
// call by value..
// swap the value of 2 integer variables.

#include <stdio.h>
void swap(int, int);
int main()
{
    int a, b;
    printf("Enter any 2 numbers.\n");
    scanf("%d%d", &a, &b);
    printf("Values before calling swap function: \n a : %d  b : %d \n", a, b);
    swap(a, b);
    printf("Values after calling swap function: \n a : %d  b : %d \n", a, b);

    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Displaying the values from inside the swap function:\n");
    printf(" a : %d  b : %d \n", a, b);
}

/*
    the variables used while calling function are called actual parameters.
    and the variables used while defining the values function are called formal
    parameters.
    Here, in function call by value, any change performed on formal parameters
    will not affect the actual parameters..
    the change done to formal parameters will remain inside the function definition
    only in case of function call by value as shown in the example above.

*/