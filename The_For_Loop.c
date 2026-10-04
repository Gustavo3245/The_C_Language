#include <stdio.h>

enum conversion { LOWER = 0, STEP = 20, UPPER = 300};

int main(int argc, char *argv[]){
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf(" %3d %6.1f \n", fahr, (5.0/9.0) * (fahr - 32));
    }

}
