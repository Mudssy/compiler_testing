
#include <stdio.h>

int main() {
    _Static_assert(1 == 1, "Message when condition is false.");
    
    printf("The static assertion passed.\n");
    
    return 0;
}
