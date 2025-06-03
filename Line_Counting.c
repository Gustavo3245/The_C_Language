#include <stdio.h>

/* count lines in input */ 
int main(int argc, char *argv[]){
    int caracter, lines;

    lines = 0;
    while ((caracter = getchar()) != EOF) {
        if(caracter == '\n'){
            ++lines;
        }   
    }
    printf("%d\n", lines);
}
