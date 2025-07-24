#include<stdio.h>
#define MAX_LENGTH 100
int main()
{
    char c, message[MAX_LENGTH];
    char *front = &message, *back= &message;
    printf("Enter a message: ");
    while((c= getchar()) != '\n' && back < message + MAX_LENGTH)
        *back++ = c;
    puts(message);
    



    return 0;
}