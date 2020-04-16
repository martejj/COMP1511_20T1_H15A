#include <stdio.h>

#define SIZE 9

// This checks if the current point is in the 3x3
int isInRegion(int row, int col) {
    return row >= 3 && row < 6 && col >= 3 && col < 6;
}

int main(void) {

    int row = 0;
    int col = 0;

    while (row < SIZE) {
        col = 0;
        while (col < SIZE) {
            if (isInRegion(row, col)) {
                printf("#");
            } else {
                printf("*");
            }
            col++;
        }
        row++;
        printf("\n");
    }
}
