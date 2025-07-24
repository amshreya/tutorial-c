#include<stdio.h>
#define MAX_LENGTH 100
int main()
{
    char c, message[MAX_LENGTH];
    int i = 0;
    printf("Enter a message and terminate with a sp. character: ");

    while ((c = getchar()) != '\n' &&  message+i <= message + MAX_LENGTH-1) { //to have space for null char
        *(message + i) = c;
        i++;
    } 
    *(message +i)='\0';
    i--;
    char sp_char=message[i];
    int j= i-1;
    char word[MAX_LENGTH];
  
    while (j >= 0 )

    {
        i=0;

        while (j >= 0 && message[j] != ' ') 
        {
            word[i] = message[j];
            i++;
            j--;
        }
  
        j--;
        word[i]='\0';
        for(int k=i-1; k>=0; k--)
        {
        putchar(*(word+k));
        }

        printf(" ");
    }
    printf("\b");
    putchar(sp_char);
    return 0;
}