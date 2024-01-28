// program to demonstrate pointer.

#include <stdio.h>

int main()
{
    int a = 10, *p, **q, ***r, ****s;
    p = &a; // address of a is stored in p pointer variable
    q = &p; // address of p is stored in q pointer variable
    r = &q; // address of a is stored in r pointer variable
    s = &r; // address of a is stored in s pointer variable
    printf("value of a : %d \n", a);
    printf("Addresses of different variables:\n");
    printf("address of a : %p \n", &a);
    printf("address of p : %p \n", &p);
    printf("address of q : %p \n", &q);
    printf("address of r : %p \n", &r);
    printf("address of s : %p \n", &s);
    // you can you %d instead of %p, i used %p because %d gives sometimes -ve values
    //  because the memory address is soo big sometimes it gets out of its range.
    //  %p represents the number using hex codes (0 to 10, A to F).
    //  accessing same value using different pointer variables...

    printf("\nDisplaying Address stored in different pointer variables :\n");
    printf("address stored in p pointer variable : %p \n", p);
    printf("address stored in q pointer variable : %p \n", q);
    printf("address stored in r pointer variable : %p \n", r);
    printf("address stored in s pointer variable : %p \n", s);

    printf("\nDifferent values at different address stored by different pointer\n");
    printf("value at address p is %d \n", *p); // 10
    printf("value at address q is %p \n", *q); // a address will be displayed.
    printf("value at address r is %p \n", *r); // p address will be displayed.
    printf("value at address s is %p \n", *s); // q address will be displayed.

    // to access value of a by all variable we need to dereference them using * symbol.
    // one dereference will take the one pointer address forward towards the main value
    // of a = 10; this will be more clear in below program..

    printf("\n\nDereferenced for value of 'a':\n");
    printf("Value of variable a : %d \n", a);
    printf("Value of variable a obtained from pointer p : %d \n", *p);
    printf("Value of variable a obtained from pointer q : %d \n", **q);
    printf("Value of variable a obtained from pointer r : %d \n", ***r);
    printf("Value of variable a obtained from pointer s : %d \n", ****s);

    return 0;
}