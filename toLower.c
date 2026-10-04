#include <stdio.h>

int lower(int character){
    if(character >= 'A' && character <= 'Z'){
        return character + ('a' - 'A') ;
    }
    return character;
}

int main(int argc, char *argv[]){
}
