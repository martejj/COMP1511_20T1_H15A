#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256
#define MAX_LINES 256
#define FALSE 0
#define TRUE 1

int isInHistory(char history[MAX_LINES][MAX_LINE_LENGTH], int lineNum);

int main(void) {
    
    char history[MAX_LINES][MAX_LINE_LENGTH];
    
    int lineNum = 0;
    
    while(fgets(history[lineNum], MAX_LINE_LENGTH, stdin) != NULL) {
        
        // Only print if history[lineNum] doesnt exist before lineNum
        if (!isInHistory(history, lineNum)) {
            printf("%s", history[lineNum]);
        }
        lineNum++;
    }
    
    return 0;
}

int isInHistory(char history[MAX_LINES][MAX_LINE_LENGTH], int lineNum) {
    int i = 0;
    
    while (i < lineNum) {
        
        if (strcmp(history[i], history[lineNum]) == 0) {
            return TRUE;
        }
        
        i++;
    
    }
    
    return FALSE;
    
}
