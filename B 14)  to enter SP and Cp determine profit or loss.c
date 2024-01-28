// Program to enter cp & sp and then print profit or loss...

#include <stdio.h>

int main()
{
    float cp, sp, profit, loss;
    printf("Enter CP : ");
    scanf("%f", &cp);
    printf("Enter SP : ");
    scanf("%f", &sp);
    if (sp > cp)
    {
        profit = sp - cp;
        printf("Profit : %f\n", profit);
    }
    else
    {
        loss = cp - sp;
        printf("Loss : %f\n", loss);
    }

    return 0;
}