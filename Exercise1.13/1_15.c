#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float conversion(float fahr){
    return (5.0 / 9.0) * (fahr - 32.0);
}

int main(int argc, char *argv[]){
    float fahr = LOWER;
    
    printf("Fahrentheit \t Celsius \n");
    while (fahr <= UPPER) {
        printf("%5.1f \t\t %6.1f \n", fahr, conversion(fahr));
        fahr = fahr + STEP;
    }
}
