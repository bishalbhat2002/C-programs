// Program to enter n number and display their sum using function..

#include <stdio.h>
int sum(int[], int);
int main()
{
    int num[100], i, n, s;
    printf("Enter how many numbers : ");
    scanf("%d", &n);
    printf("Enter %d numbers.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    s = sum(num, n);
    printf("The sum of %d Numbers is %d.\n", n, s);
    return 0;
}

int sum(int p[], int q)
{
    int total = 0, i;
    for (i = 0; i < q; i++)
        total = total + p[i];
    return total;
}