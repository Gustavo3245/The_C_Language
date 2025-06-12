#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int Getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char to[], char from[]);

int main(int argc, char *argv[]) {
    int length = 0;
    int maxLength = 0;
    char line[MAXLINE];
    char longest[MAXLINE];
    char reverseString[MAXLINE];

    while ((length = Getline(line, MAXLINE)) > 0) {
        if (length > maxLength) {
            maxLength = length;
            copy(longest, line);
            reverse(reverseString, line);
        }
        if (maxLength > 0) {
            printf("%s", longest);
            printf("%s", reverseString);
        }
    }
    return 0;
}

int Getline(char line[], int maxline) {
    int count, value;
    
    for (value = 0;value < maxline - 1 && (count = getchar()) != EOF && count != '\n';++value) {
        line[value] = count;
    }

    if (count == '\n') {
        line[value] = count;
        ++value;
    }

    line[value] = '\0';
    return value;
}

void copy(char to[], char from[]) {
    int value = 0;

    while ((to[value] = from[value]) != '\0') {
        value++;
    }
}

void reverse(char to[], char from[]){
    int stringLength = strlen(from);
    int value;
    
    for (value = 0; value < stringLength; ++value) {
        to[value] = from[stringLength - value - 1];
    }
    
    to[value] = '\0';
}
