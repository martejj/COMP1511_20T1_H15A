#include<stdio.h>

int isUpper(char ch);

int main(void) {
    
    // 1
    printf("%d", isUpper('A');

    // 0
    printf("%d", isUpper('a'))

    // 1
    printf("%d", isUpper('K'))

    // ?
    printf("%d", isUpper('!'))
}

int isUpper(char ch) {

    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }

    return 0;

}