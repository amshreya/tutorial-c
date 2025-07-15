#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
int roll_dice(void);
bool play_game(void);
int main()
{
    srand(time(NULL));  // One-time seed

    bool result;
    char play_again = 'y';
    int wins=0, losses=0;
    while(play_again == 'y')
    {
        result = play_game();
        if(result == true)
        {
            printf("\nYou win!");
            wins++;
        }
        else
        {
            printf("\nYou lose!");
            losses++;
        }
    
        printf("\nPlay again? ");
        scanf(" %c", &play_again);

        if(play_again != 'y')
        {
            printf("\nWins: %d  Losses: %d", wins,losses);
            break;
        }
    }
    return 0;
      
}
bool play_game()
{
    int point, num;
    num= roll_dice();
    printf("\nYou rolled: %d", num);
    if(num == 2 || num == 3 || num == 12)
    {
        return false;
    }
    if(num == 7 || num ==11)
    {
        return true;
    }
    else
    {
        point = num;
        printf("\nYour point is %d", point);
        while(point == num)
        {
            int roll = roll_dice();
            if (roll == 7)
            {
                printf("\nYou rolled 7");
                return false;
            }
            if (roll != point)
                printf("\nYou rolled: %d",roll);
            else
                break;
        }
        printf("\nYou rolled: %d",point);
        return true;
    }
}
int roll_dice()
{
    int d1, d2;
    d1 = rand() % 5 +1;
    d2 = rand() % 5 +1;
    return(d1+ d2);
}