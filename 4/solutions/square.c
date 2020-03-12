// Write a c program that stores in each index the square of the index and then prints them.
// By Harrison and friends :)

#include <stdio.h>

#define MAX_NUM 100

int main(void) {
    
    int size;
    printf("Enter an integer: ");
    scanf("%d", &size);
    
    int row = 0;
    int col = 0;
    
    while (row < size) {
        
        col = 0;
        
        
        while (col < size) {
            
            if (col == row || row == size - col - 1) {
                printf("*");
            } else {
                printf("_");
            }
            col++;
        }

        printf("\n");
        
        row++;
    }
    
    return 0;
    
}
