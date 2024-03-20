
#include <stdio.h>

__attribute__((optimize(0)))  // Disable optimizations
void function_to_test() {
    printf("This is a test function\n");
}

int main() {
    for(int i = 0; i < 1000; i++) {
        function_to_test();  // Call the function many times to give it work to do
    }

    return 0;
}
