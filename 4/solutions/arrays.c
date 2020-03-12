// Demonstration of Arrays Week 4 Tute
// By Clarissa Tatang

#include <stdio.h>

#define MY_HEIGHT 156
#define LENGTH 5

int main (void) {

    // TODO: How to initialise an array of heights?
    int heights[LENGTH] = {178, 151, 183, 182, 230};


    // TODO: How do we print the array that we have created?
    int counter = 0;
    while (counter < LENGTH) {
        printf ("Height is %dcm\n", heights[counter]);
        counter++;
    }


    // TODO: How to check if MY_HEIGHT is in the array?
    counter = 0;
    while (counter < LENGTH) {
        if (MY_HEIGHT == heights[counter]) {
            printf ("My height is here!\n");
        }
        counter++;
    }


    return 0;
}