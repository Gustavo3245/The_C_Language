#include <stdio.h>

/* print Fahrenheit_Celsius table
   for fahr = 0, 20, ..., 300; FLoating-Point Version  */
int main(int argc, char *argv[]){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; // Lower limit of temperature scale
    upper = 300; // uppper limit
    step = 20; // step size

    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%5.1f \t %6.1f \n", celsius, fahr);
        fahr = fahr + step;
    }

}
