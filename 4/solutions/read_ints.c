#include <stdio.h>

#define SIZE 100

int main(void) {
     
    // Method 1:
    /*
    int input;
    int nScanned;
    int nInputs = 0;

    nScanned = scanf("%d", &input);

    while (nScanned == 1) {
        nInputs++;
        nScanned = scanf("%d", &input);
    }

    printf("%d\n", nInputs);
    */
    
    // Method 2:
    int input;
    int nInputs = 0;

    while (scanf("%d", &input) == 1) {
        nInputs++;
    }

    printf("%d\n", nInputs);

    return 0;
}

// In a function:
int read_ints(int array[SIZE]) {
    int nInputs = 0;
    while (scanf("%d", &array[SIZE]) == 1) {
        nInputs++;
    }
    return nInputs;
}