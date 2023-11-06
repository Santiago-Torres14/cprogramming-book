#include <stdio.h>
#include <stdbool.h>

#define MAX_WORD_LENGTH 20

int main() 
{
    int character;
    int i, j, wordLength = 0;
    int wordLengths[MAX_WORD_LENGTH];
    bool isWord=false;

    for (i=0;i<MAX_WORD_LENGTH;i++)
        wordLengths[i] = 0;

    while ((character = getchar()) != EOF)
    {
        isWord = true;

        if (character == ' ' || character == '\n' || character == '\t' || character == '.' || character == ',') {
            isWord = false;
            if (wordLength > 0) {
                if (wordLength > 20)
                    wordLength = 20;
                wordLengths[wordLength-1]++;
            }
            wordLength = 0;
        }

        if (isWord) {
            wordLength++;
        }

    }

    // print horizontally
    for (i=0;i<MAX_WORD_LENGTH;i++)
    {
        printf("%d:", i+1);
        for (j=1;j<=wordLengths[i];j++)
            printf("*");
        printf("\n");
    }

    // calculate maxium value from wordLengths
    //int maxValue = 0;
    //for (i=0;i<MAX_WORD_LENGTH;i++)
    //    if (wordLengths[i] > maxValue)
    //        maxValue = wordLengths[i];

    //for (i=0;i<maxValue;i++)
    //{
    //    for (j=0;j<MAX_WORD_LENGTH;j++)
    //    {
    //    }
    //}


    return 0;
}
