#include<stdio.h>
#include<string.h>
#define MSG_MAX_LENGTH 20
int main()
{
    char c, message[MSG_MAX_LENGTH], smallest[MSG_MAX_LENGTH], largest[MSG_MAX_LENGTH];
    int i;
    int first =1;
    for(;;)
    {
        i=0;
        printf("Enter word: ");
        while((c= getchar()) != '\n' && i< MSG_MAX_LENGTH-1)
            message[i++] =c;
        message[i] ='\0';
        if(i==4)
            break;
        if(first == 1)
        {
            strcpy(smallest,message);
            strcpy(largest, message);
            first= 0;
        }
        if(strcmp(message, smallest)< 0)
            strcpy(smallest, message);
        if(strcmp(message, largest)> 0)
            strcpy(largest, message);
    }
    puts("Smallest is: ");
    puts(smallest);
    printf("Largest is: %s",largest);
    return 0;
}