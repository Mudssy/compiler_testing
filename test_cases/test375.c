
#include <stdio.h>

int main() {
    int a = 1, b = 0;
    
    // Testing AND operation
    if (a && b) {
        printf("AND operation failed\n");
    } else {
        printf("AND operation succeeded\n");
    }
    
    // Testing OR operation
    if (a || b) {
        printf("OR operation succeeded\n");
    } else {
        printf("OR operation failed\n");
    }

    // Testing NOT operation
    if (!b) {
        printf("NOT operation succeeded\n");
    } else {
        printf("NOT operation failed\n");
    }
    
    return 0;
}
