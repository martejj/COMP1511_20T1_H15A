#include <stdio.h>

int isUpper(char ch);

int main(void) {

    char line[100];

    fgets(line, 100, stdin);

    int i = 0;

    while(line[i] != '\0') {
        if (i%2 && ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))) {
            
            if (isUpper(line[i])) {
                line[i] = line[i] - 'A' + 'a';
            } else {
                line[i] = line[i] - 'a' + 'A';
            }

        }
        i++;
    } 

    printf("%s", line);

}


int isUpper(char ch) {

    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }

    return 0;

}