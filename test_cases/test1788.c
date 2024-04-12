
#include <stdio.h>

int main() {
    int x; // Uninitialized variable
    
    if (x == 42) {
        printf("x is 42\n");
    } else {
        printf("x is not 42\n");
    }
    
    return 0;
}
