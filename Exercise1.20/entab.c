#include <stdio.h>

#define TAB '\t'
#define SPACE ' '
#define TABSTOP 4

// Tabs a cada 4 colunas, (0, 4, 8, 12, 16...)
int main(int argc, char *argv[]){
    int caracter, caracterCount, spaceCount;

    while((caracter = getchar()) != EOF){
        caracterCount++; //Count every single caracter.
        
        if(caracter == SPACE){
            spaceCount++; //Count every single space.
        }
        else {
            while (spaceCount >= TABSTOP) {
                putchar(TAB);
                spaceCount = spaceCount - TABSTOP;
            }

            while (spaceCount > 0){
                putchar(' ');
                spaceCount--;
            }
            putchar(caracter);
        }
    }
    return 0;
}

