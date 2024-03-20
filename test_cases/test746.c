
#include <stdio.h>

void __attribute__((const)) test_function(int i) {
    printf("Test function called with %d\n", i);
}

int main() {
    int input = 10; // Change this value to check if the compiler optimizes or not
    test_function(input);
    
    return 0;
}
