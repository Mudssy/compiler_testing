
#include <stdio.h>

int main() {
    int x = 10;  // Change this value to test different cases
    
    switch (x) {
        case 1:
            printf("Case 1\n");
            break;
        #ifdef WARNING_ENABLED
        default:
            #error "Warning: No matching case found"
        #endif
    }

    return 0;
}
