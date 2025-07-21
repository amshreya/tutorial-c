#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() 
{
    char c, message[MAX_LENGTH];
    char *front = message, *back = message;

    printf("Enter a message: ");


    while ((c = getchar()) != '\n' && back < message + MAX_LENGTH) { //to have space for null char
        *back++ = c;
    } 

    back--; 

    int is_palindrome = 1;

    while (front < back) {
        while (front < back && !isalpha((unsigned char)*front)) 
            front++;
        while (front < back && !isalpha((unsigned char)*back))
            back--;

        if (tolower((unsigned char)*front) != tolower((unsigned char)*back)) {
            is_palindrome = 0;
            break;
        }

        front++;
        back--;
    }

    if (is_palindrome)
        printf("Palindrome.\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}
