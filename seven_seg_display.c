#include<stdio.h>
#include <string.h>   
#include <ctype.h>    // for isdigit()

#define MAX_DIGITS 10
const int segments[10][7] = {
    // a, b, c, d, e, f, g
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
    {1, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}  // 9
    };
char digits[3][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main()
{
    char message[10];
    printf("Enter the numbers (length should be less than 10) : ");
    fgets(message, sizeof(message), stdin);
    puts(message);

    /* Strip the trailing newline, if present */

    size_t len = strlen(message);
    if (len > 0 && message[len - 1] == '\n')
        message[len - 1] = '\0';

    clear_digits_array();
    for (int i = 0; message[i] != '\0' ; i++) 
    {
       if (isdigit((unsigned char)message[i])) {
            int value = message[i] - '0';
            process_digit(value, i);
        }
        
    }

    print_digits_array();
    return 0;
    
}
void clear_digits_array(void) 
{
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < MAX_DIGITS * 4; col++) {
            digits[row][col] = ' ';  
        }
    }
}
void process_digit(int digit, int position)
{
    
    int col = position * 4; // Each digit occupies 4 columns (3 + 1 space)

    if (segments[digit][0])  // Top
        digits[0][col + 1] = '_';

    if (segments[digit][5])  // Top-left
        digits[1][col] = '|';

    if (segments[digit][1])  // Top-right
        digits[1][col + 2] = '|';

    if (segments[digit][6])  // Middle
        digits[1][col + 1] = '_';

    if (segments[digit][4])  // Bottom-left
        digits[2][col] = '|';

    if (segments[digit][2])  // Bottom-right
        digits[2][col + 2] = '|';

    if (segments[digit][3])  // Bottom
        digits[2][col + 1] = '_';
}

void print_digits_array()
{
    for(int i=0; i< 3; i++)
    {
        for(int j=0; j< MAX_DIGITS*4 ; j++)
        printf("%c",digits[i][j]);
    
    printf("\n");
    }
}