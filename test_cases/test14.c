
#include <stdio.h>

int main() {
    int x = 5;
    
    // Testing if statement
    if (x > 0) {
        printf("Value is positive\n");
    } else {
        printf("Value is not positive\n");
    }
    
    // Testing switch case 
    switch(x) {
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        default:
            printf("Default Case\n");
    }
    
    // Testing loop
    for(int i = 0; i < 5; ++i) {
        printf("Loop Iteration %d\n", i);
    }
    
    return 0;
}
