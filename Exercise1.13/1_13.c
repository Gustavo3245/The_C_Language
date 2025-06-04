#include <stdio.h>

#define IN 1 /* Inside a word */
#define OUT 0 /* Outside a word */

int main(int argc, char *argv[]){
    int wordCaracter[10];
    int caracter, count, state, wordCount, words;
    
    for (int value = 0; value < 10; ++value) {
        wordCaracter[value] = 0;
    }

    state = OUT;
    while((count = getchar()) != EOF){
        if(count == ' ' || count == '\n' || count == '\t'){
            if (state == IN) {
                wordCaracter[caracter] = wordCount;
                words++;
            }
            wordCount = 0;
            caracter++;

            state = OUT;
        }
        else {
            state = IN;
            wordCount++;
        }
    }

    printf("Value of Words: ");
    for (int value = 0; value < 10; ++value) {
        printf(" %d", wordCaracter[value]);
    }
    printf(" Words: %d \n", words);
}

