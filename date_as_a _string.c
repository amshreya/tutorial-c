#include<stdio.h>
#include<string.h>
int main()
{
    char input_date[];
    char *months[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
    };

    printf("Enter a date (mm/dd/yyyy): ");
    gets(input_date);
    return 0;
}