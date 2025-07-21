#include<stdio.h>
#define MAX_LENGTH 100
int main()
{
    char message[MAX_LENGTH];
    char c, *p = message;
    printf("Enter a message:");
    while((c= getchar()) != '\n' && p < message + MAX_LENGTH)
    {
        *p = c; 
        p++;
    }
    p--;
    printf("The reversed message is: ");
    while(p >= message)
    {
        putchar(*p);
        //printf("%c",c);
        p --;
    }
    return 0;
}