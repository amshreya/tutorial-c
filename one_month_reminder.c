#include<stdio.h>
#include<string.h>
#define MAX_REMIND 50   
#define MSG_LEN 60 
int read_line(char str[]);
int main()
{
    int i,j, day, num_remind=0;
    char day_str[3], reminders[MAX_REMIND][MSG_LEN+3];
    char msg_str[MSG_LEN];
    for(;;)
    {
        if((num_remind == MAX_REMIND))
        {
            printf("-----NOT ENOUGH SPACE LEFT-----");
            break;
        }
        printf("Enter day and reminder:");
        scanf("%2d", &day);
        if(day ==0)
            break;
        sprintf(day_str, "%2d", day);
        read_line(msg_str);
         for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
            break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);
        num_remind++;
    }
    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
    printf(" %s\n", reminders[i]);
        
    return 0;
}

int read_line(char str[])
{
    char c;
    int i=0;
    while ((c = getchar()) != '\n' &&  str+i <= str + MSG_LEN-1) //to have space for null char
        str[i++] = c;
    str[i]= '\0';
    return i;
}
