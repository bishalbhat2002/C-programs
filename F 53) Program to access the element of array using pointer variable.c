// program to access the element of an array using pointer variable...

#include <stdio.h>

int main()
{
    int num[20], n, i, *ptr[20];
    printf("Enter how many numbers : ");
    scanf("%d", &n);
    printf("Enter %d numbers.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    printf("Assigning array to pointers...\n");
    for (i = 0; i < n; i++)
        ptr[i] = &num[i];
    printf("Displaying the array elements using pointers:\n");
    for (i = 0; i < n; i++)
        printf("%d \n", *ptr[i]);
    return 0;
}

/*
    In above program, first we make array and enter numbers in it. after then, we
    saved address of each array element in the separate pointer variable.
    and then, we displayed the array element using the pointer...
*/