#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"readline.h"
#define MAX_WORDS 50
#define MSG_MAX_LEN 20
int main()
{
    char *words[MAX_WORDS];
    char *msg;
    int word_length, word_count=0;
    msg = malloc(MSG_MAX_LEN * sizeof(char));
    for(;;)
    {
        printf("Enter word: ");
        word_length= read_line(msg, MSG_MAX_LEN);
        if(word_length==0)
            break;
         words[word_count] = malloc(word_length + 1); 
        if (words[word_count] == NULL) {
            printf("Memory allocation failed.\n");
            exit(EXIT_FAILURE);
        }
        strcpy(words[word_count], msg);
        word_count++;
    }
    //Bubble sort
        for (int pass = 0; pass < word_count - 1; pass++) {
        for (int i = 0; i < word_count - 1 - pass; i++) {
            if (strcmp(words[i], words[i + 1]) > 0) {
                char *temp = words[i];
                words[i] = words[i + 1];
                words[i + 1] = temp;
            }
        }
    }
    printf("\nSorted words:\n");
    for (int i = 0; i < word_count; i++) {
        printf(" %s", words[i]);
        free(words[i]);
    }

    return 0;
}