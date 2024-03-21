
#include <stdio.h>

int main() {
    int x = 5; // initial value
    
    printf("CHECK: x = %d\n", x);  // normal usage, should pass
    if (x != 5) {
        printf("FAILURE\n");  // failure case, should not print
    } else {
        printf("SUCCESS\n");  // success case, should print
    }
    
    x = 10; // change the value

    printf("CHECK: x = %d\n", x);  // normal usage, should fail
    if (x != 5) {
        printf("FAILURE\n");  // failure case, should print
    } else {
        printf("SUCCESS\n");  // success case, should not print
    }
    
    return 0;
}
