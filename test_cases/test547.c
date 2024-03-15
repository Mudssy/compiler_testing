
#include <stdio.h>

int main() {
    int x = 0;
    
    if (x) {
        printf("This code should never be reached.\n");
    } else {
        __builtin_unreachable();
    }
    
    return 0;
}
