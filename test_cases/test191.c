
#include <stdio.h>

[[deprecated("This function is deprecated")]] void test_function() {}

int main(void) {
    printf("Hello from the main function\n");
    return 0;
}
