#include<stdio.h>
#define MAX_LENGTH 100
int main()
{
    char c, message[MAX_LENGTH];
    int i = 0;
    printf("Enter a message: ");

    while ((c = getchar()) != '\n' &&  message+i <= message + MAX_LENGTH) { //to have space for null char
        *(message + i) = c;
        i++;
    } 

    int is_palindrome = 1;

    int p=0;
    while(is_palindrome)     
    {
        while((!isalpha(*(message +i))))
            i--;
        while((!isalpha(*(message +p))))
            p++;
        if(*(message + i) != *(message +p))
        {
        is_palindrome = 0;
        break
        }
        i--;
        p++;
    }

    if (is_palindrome)
        printf("Palindrome.\n");
    else
        printf("Not a palindrome.\n");
    return 0;
}