
#include <stdio.h>

int main() {
    int i;
    
    for(i = 0; i < 10; i++) {
        printf("Value of i: %d\n", i);
        
        if (i == 5) {
            break;
        }
    }
    
    return 0;
}
