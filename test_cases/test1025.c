
#include <stdio.h>

int main() {
    int i;
    printf("Block Indentation Test:\n");
    
    /* Test if-else statement */
    for (i = 0; i < 2; ++i) {
        if (i == 0) 
            printf("if-statement test: TRUE\n");
        else 
            printf("if-statement test: FALSE\n");
        
        /* Test while loop inside the body of if statement */
        int j = 0;
        while(j < 2){
            if (j == 1) 
                printf("\twhile-statement test: TRUE\n");
            else 
                printf("\twhile-statement test: FALSE\n");
            ++j;
        }
    }
    
    /* Test for loop */
    for(i = 0; i < 3; ++i) {
        if (i == 1) 
            printf("for-loop test: TRUE\n");
        else 
            printf("for-loop test: FALSE\n");
    }
    
    return 0;
}
