
#include <stdio.h>

__attribute__((weak_import)) int myWeakFunction() {
    return 42;
}

int main() {
    if (myWeakFunction) {
        printf("The weak function exists and returned: %d\n", myWeakFunction());
    } else {
        printf("The weak function is not available.\n");
    }
    
    return 0;
}
