#include<stdio.h>
#include <ctype.h>
#define MAX_LENGTH 100
int main()
{
    char c, message[MAX_LENGTH];
    int i = 0;
    printf("Enter a message: ");

    while ((c = getchar()) != '\n' &&  message+i <= message + MAX_LENGTH-1) { //to have space for null char
        *(message + i) = c;
        i++;
    } 
    *(message +i)='\0';
    i--;

    printf("%d\n",i);
    puts(message);
    int is_palindrome = 1;

    int p=0;
    while(is_palindrome && p<i)     
    {
        printf("\ni is %d, p is %d\n",i,p);
        while((!isalpha((unsigned char)*(message +i))))
            i--;
        while((!isalpha((unsigned char)*(message +p))))
            p++;
        if(*(message + i) != *(message +p))
        {
        is_palindrome = 0;
        break;
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