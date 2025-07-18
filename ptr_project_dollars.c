#include<stdio.h>
void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones)
{
    *twenties = dollars / 20;
    *tens = (dollars%20) / 10;
    *fives = (dollars % 10) / 5;
    *ones = (dollars % 5);
    printf("Twenties = %d, tens= %d, fives= %d, ones= %d", *twenties, *tens, *fives, *ones);
}

int main()
{
    int dollar_amount, twenties, tens, fives, ones;
    printf("Enter a dollar amount:");
    scanf("%d", &dollar_amount);
    //dollar_amount=93;
    pay_amount(dollar_amount, &twenties, &tens, &fives, &ones );

    return 0;
}