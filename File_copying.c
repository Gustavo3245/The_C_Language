#include <stdio.h>

int main(int argc, char *argv[]){
    int character;

    while ((character = getchar()) != EOF) { // End of Line
        putchar(character);
    }
}
