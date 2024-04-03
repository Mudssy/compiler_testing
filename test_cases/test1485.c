
#include <stdio.h>

int main() {
    int i = 1;
    
mylabel: // Label handling
    printf("Label\n");

    switch (i) {  // Switch-Case handling
        case 1:
            printf("SwitchCase\n");
            break;
        
        default:
            return 0;
    }
    
    while(1); // To make sure it does not run forever
}
