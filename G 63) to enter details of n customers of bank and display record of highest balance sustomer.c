// in a bank there are n customers with attributes
// name, account no, and banalce.
// program to to enter these details and display
// the details of customer with highest balance..

#include <stdio.h>
struct customer
{
    char name[25];
    int acc_no;
    float balance;
};
int main()
{
    struct customer c[100];
    int n, i, max_index;
    float max_balance;
    printf("Enter how many customers : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        getchar(); // getchar() used here because program was not waiting for us to
                   // give it input...
        printf(" -->Enter the record of %d customer:\n", i + 1);
        printf("Enter name : ");
        gets(c[i].name);
        printf("Enter account number : ");
        scanf("%d", &c[i].acc_no);
        printf("Enter balance : ");
        scanf("%f", &c[i].balance);
    }
    max_index = 0;              // max_index is the variable that will store the index of maximum balance.
    max_balance = c[i].balance; // max_balance is the variable that will store the maximum balance.
    for (i = 0; i < n; i++)
    {
        if (c[i].balance > max_balance)
        {
            max_balance = c[i].balance;
            max_index = i;
        }
    }

    printf("\nDisplaying the record of customer having largest balance:\n");
    printf("Name : %s \n", c[max_index].name);
    printf("Account no. : %d \n", c[max_index].acc_no);
    printf("Balance : %f \n", c[max_index].balance);

    return 0;
}