#include <stdio.h>
#include <ctype.h>
#include<stdbool.h>
#define MAX_LENGTH 100
bool is_palindrome(const char *message);
int main() 
{
    char c, message[MAX_LENGTH];
    int i=0;
    printf("Enter a message: ");
    while((c= getchar()) != '\n' && i< MAX_LENGTH-1)
            message[i++] =c;
    message[i] = '\0';
    
    if (is_palindrome(message))
        printf("Palindrome.\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}

bool is_palindrome(const char *message)
{
    int front=0, back=0;

    while (message[back] != '\0') { 
        back++;
    } 

    while (front < back) {
        while (front < back && !isalpha(message[front])) 
            front++;
        while (front < back && !isalpha(message[back]))
            back--;

        if (tolower(message[front]) != tolower(message[back])) 
            return false;
        
        front++;
        back--;
    }
    return true;
}