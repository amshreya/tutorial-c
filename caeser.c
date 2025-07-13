/*
#include<stdio.h>
int main()
{
    char message[80],encrypted_message[80];
    printf("Enter the message to be encryped(less than 80 chars in length): ");
    int i,shift_amount;
    //scanf("%s",message);
    fgets(message, sizeof(message), stdin);
    printf("%s",message);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);
    for(i=0; message[i] != '\0'; i++)
    {
        encrypted_message[i]= message[i]+ shift_amount;
    }
    encrypted_message[i] = '\0';
    printf("Encrypted message: %s",encrypted_message);
    return 0;
}
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char message[80], encrypted[81];
    int shift;

    /* 1. Get the message */
    printf("Enter the message to be encrypted (≤80 chars): ");
    fgets(message, sizeof(message), stdin);

    /* Strip the trailing newline, if present */
    size_t len = strlen(message);
    if (len > 0 && message[len - 1] == '\n')
        message[len - 1] = '\0';

    /* 2. Get the shift amount */
    printf("Enter shift amount (1-25): ");
    if (scanf("%d", &shift) != 1 || shift < 1 || shift > 25) {
        printf("Invalid shift.\n");
        return 1;
    }
    /* Clear leftover newline */
    while (getchar() != '\n');

    /* 3. Caesar‑encrypt */
    for (int i = 0; message[i] != '\0'; i++) {
        char c = message[i];

        if (isupper((unsigned char)c))
            encrypted[i] = (char)((c - 'A' + shift) % 26 + 'A');
        else if (islower((unsigned char)c))
            encrypted[i] = (char)((c - 'a' + shift) % 26 + 'a');
        else
            encrypted[i] = c;                   /* leave non‑letters unchanged */
    }
    encrypted[len] = '\0';

    /* 4. Print the result */
    printf("Encrypted message: %s\n", encrypted);
    return 0;
}
