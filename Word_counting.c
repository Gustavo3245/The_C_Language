#include <stdio.h>

#define IN 1 /* Inside a word */
#define OUT 0 /* Outside a word */

int main(int argc, char *argv[]){
    int count, caracters, words, lines, state;
    
    state = OUT;
    caracters = words = lines = 0;
    
    while((count = getchar()) != EOF){
        caracters++;

        if(count == '\n'){
            lines++;
        }
        
        if(count == ' ' || count == '\n' || count == '\t'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            words++;
        }
    }
    printf("\n%d %d %d\n", lines, words, caracters - 1);
}
