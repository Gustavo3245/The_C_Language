#include <stdio.h>

#define NUM_CHARS 256

int main(int argc, char *argv[]){
    int charFrequence[NUM_CHARS] = {0};
    int count;

    while ((count = getchar()) != EOF) {
        charFrequence[count]++;
    }
    
    puts("");
    for (int value = 0; value < NUM_CHARS; ++value) {
        if(charFrequence[value] > 0 && (value >= 32 && value <= 126)){
            printf("'%c' (%3d): ", value, value);
            for (int j = 0; j < charFrequence[value]; ++j) {
                printf("#");
            }
            printf(" %d\n", charFrequence[value]);
        }
    }
}
