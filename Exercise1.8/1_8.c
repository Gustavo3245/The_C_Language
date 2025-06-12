#include <stdio.h>

#define SPACE ' '
#define NEWLINE '\n'
#define TAB '\t'

int main(int argc, char *argv[]){
    int count, caracter;

    while ((caracter = getchar()) != EOF) {
        if(caracter == SPACE || caracter == TAB || caracter == NEWLINE){
            ++count;
        }
    }
    printf("count of spaces/tabs and newlines: %d \n", count);
    
}
