#include <stdio.h>

int main(int argc, char *argv[]){
    int count;
    
    for(count = 0; getchar() != EOF; count++); // End of Line
    printf("\nCount: %d \n", count);
}

