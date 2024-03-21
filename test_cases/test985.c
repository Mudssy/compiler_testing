
#include <stdio.h>

int main() {
    int i;
    
    for(i = 0; i < 10; i++) {
        printf("%d\n", i);
        
        if(i == 9) { // If the loop reaches 9, then skip the next iteration and go to the first.
            continue;
        } else if(i > 9){ // The loop should never reach this point as it is stopped at 9.
            return -1;
        }
    }
    
    printf("Loop finished.\n");
    
    return 0;
}
