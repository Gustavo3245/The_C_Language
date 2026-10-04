#include <stdio.h>

int fibonacci(int number){
    if(number == 1 || number == 0){
        return 0;
    }
    else if (number == 2) {
        return 2; //erro retornando 2
    }
    return fibonacci(number - 1) + fibonacci(number - 1); // erro ao number - 1 duas vezes
}


int main(int argc, char *argv[]){
    printf("%i", fibonacci(5));
}


