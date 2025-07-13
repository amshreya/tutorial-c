#include<stdio.h>
int main()
{
    int fib[40] = {[0]=0,[1]=1};
    int i;
    for(i=2; i< sizeof(fib)/sizeof(fib[0]); i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(i=0;i < sizeof(fib)/sizeof(fib[0]); i++)
    printf("%d ,",fib[i]);
    return 0;
}