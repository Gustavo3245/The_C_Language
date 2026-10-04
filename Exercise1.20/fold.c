#include <stdio.h>

void print_segment(char line[], int endText, int start);

#define MAXLINE 1000
#define FOLD_COL 80

int main(int argc, char *argv[]){
    int caracter, caracterCount;
    char line[MAXLINE];

    while ((caracter = getchar()) != EOF) {
        caracterCount++;
    
        if(caracter == '\n'){
            line[caracterCount] = '\0';
            print_segment(line, caracterCount, 0);
        }
        line[caracterCount] = caracter;
    }
    return 0;
}
 
void print_segment(char line[], int endText, int start){
    for (int value = start; value < endText; value++) {
        putchar(line[value]);
    }
    putchar('\n');
}
