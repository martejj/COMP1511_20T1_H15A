// Write a c program that stores in each index the square of the index and then prints them.
// By Harrison and friends :)

#include <stdio.h>

#define MAX_NUM 100

int main(void) {
    
    int length;
    printf("Enter a number: ");
    scanf("%d", &length);
    
    int array[MAX_NUM] = {0};
    
    int i = 0;
    
    while (i < length) {
        array[i] = i*i;
        i++;
    }
    
    i = 0;
    
    while (i < length) {
        printf("%d is in %d\n", array[i], i);
        i++;
    }
    
    return 0;
    
}
