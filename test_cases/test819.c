
#include <stdio.h>

// Declaration of x (extern)
extern int x;

int main() {
    // Check if x is defined
    if (&x) {
        printf("Defined\n");
    } else {
        printf("Not Defined\n");
    }
    
    return 0;
}
