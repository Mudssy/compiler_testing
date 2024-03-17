
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    
    // Greater than operation 
    if (a > b) {
        printf("Greater than test passed.\n");
    } else {
        printf("Greater than test failed.\n");
    }

    // Less than operation 
    if (a < b) {
        printf("Less than test passed.\n");
    } else {
        printf("Less than test failed.\n");
    }

    // Greater than or equal to operation 
    if (b >= a) {
        printf("Greater than or equal to test passed.\n");
    } else {
        printf("Greater than or equal to test failed.\n");
    }
    
    // Less than or equal to operation
    if (a <= b) {
        printf("Less than or equal to test passed.\n");
    } else {
        printf("Less than or equal to test failed.\n");
    }

    return 0;
}
