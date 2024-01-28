// function call by reference.
// function to swap the values of 3 integer variables.

#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter any 2 numbers.\n");
    scanf("%d %d", &a, &b);
    printf("Displaying values before calling swap function:\n");
    printf("a : %d, b : %d \n", a, b);
    swap(&a, &b); // address of actual parameters is passed while calling function.
    printf("Displaying values after calling swap function:\n");
    printf("a : %d, b : %d \n", a, b);
    return 0;
}

void swap(int *p, int *q) // here p and q are pointers to store addresses.
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("Displaying values from inside the swap function:\n");
    printf("value at address (p) is a : %d \n", *p);
    printf("value at address (q) is b : %d \n", *q);
}

/*
    here, the address of actual parameters is passed as argument while function
    call. so anychanges done inside function to the formal parameters will also
    affect the actual parameters in the program as shown in the example above..

    here in above program, we used pointers. pointers are used in call by refernce.
    This symbol " * " is called "value at adddress".
    This symbol " & " is called "address of".

    so during function call --> swap(&a, &b) we directly passed memory address of
    variables a and b. and in function definition  --> void swap(int *p, int *q),
    store address of a in p and, address of b in q.. and perform all the actions
    directly through memory address...
    so, as a result the actual parameters a and b got affected and their value got
    swapped.
*/