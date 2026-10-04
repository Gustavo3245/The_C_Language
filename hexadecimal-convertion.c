/* Conversor de string hexadecimal para inteiro
 * converter uma string, "0xFF23" -> número inteiro.
 * A = 10, b = 11, c = 12, d = 13, e = 14, f = 15
 */
#include <stdio.h>
#include <string.h>
int conversion(char hexadecimal[], int length);


int main(int argc, char *argv[]){
    char string[] = "0xFF23";
    int result = conversion(string, strlen(string));

    printf("hexadecimal: %s \n", string);
    printf("Decimal: %d \n", result);
}

int conversion(char hexadecimal[], int length){
    char conversion[length];
    long int decimal = 0, base = 1;

    for (int value = length - 1; value >= 0; value--) {

        if (hexadecimal[value] >= 'a' && hexadecimal[value] <= 'f') {
            conversion[value] = (hexadecimal[value] - 'a' + 10) * base;
        }
        else if (hexadecimal[value] >= 'A' && hexadecimal[value] <= 'F') {
            conversion[value] = (hexadecimal[value] - 'A' + 10) * base;
        }
        else if (hexadecimal[value] >= '0' && hexadecimal[value] <= '9'){
            conversion[value] = (hexadecimal[value] - '0') * base;
        }
        else {
            conversion[value] = '0';
        }
        decimal += conversion[value];
    }
    return decimal;
}
