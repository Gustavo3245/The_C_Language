#include <stdio.h>

/* print the current temperature in Fahrenheit and
  the convertion in Celsius.
  C = (5/9)(F-32).
 */


enum conversion { LOWER = 0, STEP = 20, UPPER = 300 };

int main(int argc, char *argv[]){
    printf("Celsius -- Fahrenheit \n");

    float fahr;
    
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%5.1f %6.0f \n",(5.0/9.0) * (fahr-32), fahr);
    }
}
