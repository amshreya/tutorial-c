#include<stdio.h>
void lowest_terms(int *n1, int *n2)
{
    int gcd=1;
    for(int i=1; i<= *n1 && i<= *n2; i++)
    {
        if(*n1 % i ==0 && *n2 % i ==0)
            gcd = i;
    }
    printf("Fraction in lowest terms is %d/%d.", (*n1/gcd), (*n2/gcd));
}
int main()
{
    int n1,n2;
    printf("Enter the fraction:");
    scanf("%d/%d", &n1, &n2);
    lowest_terms(&n1 ,&n2);
    return 0;
}