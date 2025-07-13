#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n,i,j;
    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square:");
    scanf("%d",&n);
    int element[n*n];
    int square[n][n];
    bool check[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            check[i][j] = false;
            square[i][j] = -23;
        }
    }


    int counter=1;
    for(i=0,j = n/2; i< (n*n),counter<=(n*n) ; i++,j++)
    {
        //for(j=n/2; j<n; j++)
        {
            if (check[((n-i) % n + n ) % n][j % n] == 1)
            {
                j=j-1;
                i = i+n-2 ;
            }

            square[((n-i) % n + n)% n][j % n]= counter;
            check[((n-i) % n + n)% n][j % n] = true;
            counter++;
            //printf("%d\n",square[n-i][j]);
            printf("%d,",counter);
        }
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",square[i][j]);
        }
        printf("\n");
    }

    printf("Check bool:\n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",check[i][j]);
        }
        printf("\n");
    }

    return 0;
}