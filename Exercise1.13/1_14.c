#include <stdio.h>

#define NUM_CHARS 256 //Define the Maximum character support for the array. 
#define MIN_CHAR 32 //Define the Minimum Char, the letter 'a'.
#define MAX_CHAR 126 //Define the Maximum Char, the symbol '~'.

int main(int argc, char *argv[]){
    int charFrequence[NUM_CHARS] = {0};
    int count;

    while ((count = getchar()) != EOF) {
        charFrequence[count]++;
    }
    
    puts("");
    for (int value = 0; value < NUM_CHARS; ++value) {
        if(charFrequence[value] > 0 && (value >= MIN_CHAR && value <= MAX_CHAR)){
            printf("'%c' (%3d): ", value, value);
            for (int j = 0; j < charFrequence[value]; ++j) {
                printf("#");
            }
            printf(" %d\n", charFrequence[value]);
        }
    }
}
