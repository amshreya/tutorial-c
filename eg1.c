#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 1000
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    FILE *file = fopen("C:/Personal/c_practice/input1.txt", "r");


    int col1[MAX_LINES], col2[MAX_LINES];
    int i = 0;

    while (fscanf(file, "%d %d", &col1[i], &col2[i]) == 2 && i < MAX_LINES) {
        i++;
    }

    int totalLines = i;
    fclose(file);

    qsort(col1, totalLines, sizeof(int), compare);
    qsort(col2, totalLines, sizeof(int), compare);
    int difference = 0;
    for (i=0; i< totalLines; i++)
    {
     difference += abs(col1[i] - col2[i]);
      if (i < 5) { // Print first 5 diffs to verify
            printf("Row %d: col1=%d, col2=%d, abs diff=%d\n", i + 1, col1[i], col2[i], difference);
        }
    }
    int repetitions,j;
    int similarity_index=0;
    for (i=0; i< totalLines; i++)
    {
         int is_unique = 1;
        for (int k = 0; k < i; k++) 
        {
            if (col1[k] == col1[i]) 
            {
                is_unique = 0;
                break;
            }
        }
        if (!is_unique)
        continue;

        repetitions=0;
        for (j=0; j< totalLines; j++)
        {
            if(col1[i]==col2[j])
                repetitions++;
        }
        similarity_index += col1[i] * repetitions;
    }

    printf("%d\n", difference);
    printf("%d",similarity_index);
    return 0;
}

