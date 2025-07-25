#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int sum=0;
    int sum_array[argc-1];
    for(int i=1; i<argc; i++)
    {
        sum_array[i-1] = atoi(argv[i]);
        sum += sum_array[i-1];
    }
    printf("%d", sum);
    return 0;
}