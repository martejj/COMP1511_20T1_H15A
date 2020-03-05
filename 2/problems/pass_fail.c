#include <stdio.h>

int main(void) {
    
    int mark;
    
    printf("Hello, enter a number: ");
    
    scanf("%d", &mark);
    
    if (0 <= mark && mark <= 100) {
        if (mark < 50) {
            printf("FAIL\n");
        } else {
            printf("PASS\n");
        }
    } else {
        printf("ERROR\n");
    }
    
    return 0;
}
