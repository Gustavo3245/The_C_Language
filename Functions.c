#include <stdio.h>

int power(int base, int expoente);

int main(int argc, char *argv[]){
    for (int number = 0; number < 10; ++number) {
        printf("%d %2d %4d\n", number, power(2, number), power(-3, number));
    }
    return 0;
}

int power(int base, int expoente){
    int startExpo = 1;

    for (int number = 0; number < expoente; ++number) {
        startExpo *= base;
    }
    return startExpo;
}
