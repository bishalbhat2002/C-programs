// Program to display fibbonic series upto n terms....

#include <stdio.h>
int main()
{
    int i, n, a = -1, b = 1, c;
    printf("Enter number of terms you want in the series\n");
    scanf("%d", &n);

    printf("\nThe fibbonic series upto %d terms is given by:\n", n);
    for (i = 0; i < n; i++)
    {
        c = a + b;
        printf("%d \t", c);
        a = b;
        b = c;
    }
    return 0;
}
