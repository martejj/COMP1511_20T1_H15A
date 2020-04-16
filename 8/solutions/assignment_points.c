#include <stdio.h>
#define SIZE 9

int main(void) {

    int col = 0;

    while (row < SIZE) {
        int row = 0;
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

//
// Takes:
//      (int) row - The row to check
//      (int) column - The column to check
// Returns:
//      Whether the row, col exists within the 3x3 centered square
//
// Checks whether a point is in a region
int isInRegion(int row, int col) {
    return col >= 3 && col < 6 && row >= 3 && row < 6;
}
