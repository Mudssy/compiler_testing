
#include <stdio.h>

void my_function() __attribute__((artificial));

int main() {
    if (my_function) {
        printf("Compiler supports __attribute__((artificial))\n");
    } else {
        printf("Compiler does not support __attribute__((artificial))\n");
    }
    
    return 0; // to make sure the test case returns
}
