#include<stdio.h>
#define MAX_LENGTH 100
int main()
{
    char message[MAX_LENGTH];
    int i=0;
    char c;
    printf("Enter a message:");
    while((c= getchar()) != '\n' && message < message + MAX_LENGTH)
    {
        *(message+i) = c;
        i++;
    }
    *(message+i) = '\0'; 
    i--;
    printf("The reversed message is: ");
    while( message+i >= &message[0])
    {
        putchar(*(message+i));
        i --;
    }
    return 0;
}