#include <stdio.h>

#define IN 1 /* Inside a word */
#define OUT 0 /* Outside a word */

int main(int argc, char *argv[]){
    int wordCaracter[10];
    int arrayPosition, count, state, wordLength, wordsCount;
    
    for (int value = 0; value < 10; ++value) {
        wordCaracter[value] = 0;
    }

    state = OUT;
    while((count = getchar()) != EOF){
        if(count == ' ' || count == '\n' || count == '\t'){
            if (state == IN) {
                wordCaracter[arrayPosition] = wordLength;
                wordsCount++;
            }
            wordLength = 0;
            arrayPosition++;

            state = OUT;
        }
        else {
            state = IN;
            wordLength++;
        }
    }

    printf("Value of Words: ");
    for (int value = 0; value < 10; ++value) {
        printf(" %d", wordCaracter[value]);
    }
    printf(" Words: %d \n", wordsCount);
}

