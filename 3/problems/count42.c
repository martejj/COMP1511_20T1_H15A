// Written by harrison n class
// 

#include<stdio.h>

int main(void) {

    int start = 0;
    int finish = 0;
    int divisibleBy = 0;
    
    printf("Enter start:");
    scanf("%d", &start);
    
    printf("Enter divisibleBy:");
    scanf("%d", &divisibleBy);
    
    printf("Enter finish:");
    scanf("%d", &finish);
    
    while (start <= finish) {
        
        if (start % divisibleBy == 0) {
            printf("%d\n", start);        
        }
        
        start++;
    
    }
    
    return 0;
    
}
