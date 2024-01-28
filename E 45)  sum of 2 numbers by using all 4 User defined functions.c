// user defined function..
// argument and return type.

// #include<stdio.h>
// int sum(int, int);
// int main()
// {
//     int a, b, c;
//     printf("Enter any 2 numbers.\n");
//     scanf("%d %d",&a,&b);
//     c = sum(a,b);
//     printf("The sum of %d and %d is %d.\n",a,b,c);
//     return 0;
// }
// int sum(int x, int y)
// {
//     return (x+y);
// }

// argument but no return type..

// #include<stdio.h>
// void sum(int, int);
// int main()
// {
//     int a, b;
//     printf("Enter any 2 numbers.\n");
//     scanf("%d %d",&a,&b);
//     sum(a,b);
//     return 0;
// }
// void sum(int x, int y)
// {
//     int c = x+y;
//     printf("The sum of %d and %d is %d.\n",x,y,c);
// }

// function with no argument and no return type..

// #include<stdio.h>
// void sum();
// int main()
// {
//     sum();
//     return 0;
// }
// void sum()
// {
//     int x, y;
//     printf("Enter any 2 numbers.\n");
//     scanf("%d %d",&x,&y);
//     printf("The sum of %d and %d is %d.\n",x,y,(x+y));
// }

// function with return type but no argument..

#include <stdio.h>
int sum();
int main()
{
    int c;
    c = sum();
    printf("The sum is %d.\n", c);
    return 0;
}
int sum()
{
    int x, y;
    printf("Enter any 2 numbers.\n");
    scanf("%d %d", &x, &y);
    return (x + y);
}