#include <stdio.h>

#define SPACE ' '
#define NEWLINE '\n'
#define TAB '\t'
#define BACKSLASH '\\'

int main(int argc, char *argv[]){
    int count, caracter;

    while ((caracter = getchar()) != EOF) {
        if(caracter == SPACE){
            caracter = '\b';
        }
        else if(caracter == TAB){
            caracter = '\t';
        }
        else if(caracter == BACKSLASH){
            caracter = '\\';
        }
        printf("\n");
        putchar(caracter);
    }
}
