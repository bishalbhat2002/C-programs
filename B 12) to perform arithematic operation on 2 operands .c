// Program to perform arithemetic operation on 2 operands.

#include <stdio.h>

int main()
{
    int a, b, sum, sub, mul, rem;
    float div;
    char op;

    printf("Enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    printf("Enter operator : ");
    scanf(" %c", &op);   // there is a space before "%c" in this line.
    switch (op)
    {
    case '+':
        sum = a + b;
        printf("Sum : %d \n", sum);
        break;
    case '-':
        sub = a - b;
        printf("Subtraction : %d \n", sub);
        break;
    case '*':
        mul = a * b;
        printf("multiplication : %d \n", mul);
        break;
    case '%':
        rem = a % b;
        printf("reminder : %d \n", rem);
        break;
    case '/':
        if (b == 0)
            printf("division by 0 not allowed\n");
        else
        {
            div = a / b;
            printf("division : %f \n", div);
        }
        break;
    default:
        printf("you enter wrong operation\n");
        break;
    }

    return 0;
}
