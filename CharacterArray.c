#include <stdio.h>

#define MAXLINE 1000


int Getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char *argv[]){
    int length = 0;
    int maxLength = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((length = Getline(line, MAXLINE)) > 0){
        if(length > maxLength){
            maxLength = length;
            copy(longest, line);
        }
        if (maxLength > 80){
            printf("%s", longest);
        }
    }
    return 0;
}

int Getline(char line[], int maxline){
    
    int count, value;
    for(value = 0; value < maxline - 1 && (count = getchar()) != EOF && count != '\n'; ++value){
        line[value] = count;
    }
    if(count == '\n'){
        line[value] = count;
        ++value;
    }
    line[value] = '\0';
    return value;
}

void copy(char to[], char from[]){
    int value = 0;

    while ((to[value] = from[value]) != '\0'){
        value++;
    }
}
