
#include <stdio.h>

int main(void) {
    // This should fail at compile time because 1 != 0
    static_assert(1 == 0, "Expected this to fail");
    
    printf("Success\n");
    return 0;
}
