#include<stdio.h>
#include<string.h>
int main()
{
    char input_date[11];
    int mm,dd,yyyy;
    char *months[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
    };

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &mm, &dd, &yyyy);
    printf("You entered the date %s %d, %d", months[mm-1], dd, yyyy);

    return 0;
    
}