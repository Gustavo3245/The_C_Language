#include <stdio.h>

#define TAB '\t'
#define SPACE ' '
#define TABSTOP 4

// Tabs a cada 4 colunas, (0, 4, 8, 12, 16...)
int main(int argc, char *argv[]){
    int caracter, caracterCount;
  
    while((caracter = getchar()) != EOF){
        caracterCount++; //Count every single caracter.
        
        int spaces = TABSTOP - (caracterCount % TABSTOP);
        if(caracter == TAB){
            for (int value = 0; value < spaces; ++value) {
                putchar(' ');
            }    
            caracterCount = caracterCount + spaces;
        } else {
            putchar(caracter);
        }

    }
    return 0;
}
