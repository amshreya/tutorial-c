#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_NUMBER 100
int generate_random_num(void);

int main()
{
    int secret_number,guess, trials=0;
    char user_input = 'y';
    srand(time(NULL));

    printf("Guess the secret number between 1 and 100\n");
    while(user_input == 'y' || user_input == 'Y')
    {
        secret_number = generate_random_num();
        printf("\nA new number has been chosen\n");
        for(;;)
        {
            printf("Enter guess: ");
            scanf(" %d", &guess);
            if(guess< secret_number)
            {
                printf("Too low, try again.\n");
                trials++;
            }
            if (guess > secret_number)
            {
                printf("Too high; try again\n");
                trials++;
            }
            if(guess == secret_number)
            {
            printf("You won in %d guesses\n", trials);
            break;
            }
        }
        
        printf("\nPlay again? (y/n):");
        scanf(" %c", &user_input);
        if(user_input != 'y' || user_input != 'Y')
            exit;
    }
    return 0;
}
int generate_random_num()
{
    int secret_num= rand() % MAX_NUMBER +1 ;
    return secret_num;
}