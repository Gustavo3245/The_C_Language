#include <stdio.h>

#define MAXLINE 1000

extern int max;
extern char line[MAXLINE];
extern char longest[MAXLINE];

int Getline();
void copy();

int main(int argc, char *argv[]){
    int len;
    extern int max;
    extern char longest[];

    max = 0;

    while ((len = Getline()) > 0){
        if (len > max){
            max = len;
            copy();
        }

    if(max > 0){
            printf("%s\n", longest);
        }
    return 0;
    }
}

int Getline(){
    int c, i;
    extern char line[];

    for(i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

void copy(){
    int i = 0;
    extern char line[], longest[];

    while ((longest[i] = line[i]) != '\0'){
        ++i;
    }
}

