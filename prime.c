#include<stdio.h>
#include<stdbool.h>
bool isprime(int n)
{
    int div;
    for(div=2;div<n ;div++)
    {
        if(n % div== 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(isprime(n))
        printf("Prime number");
    else
        printf("Non-prime number");
    return 0;
}