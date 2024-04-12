
#include <stdio.h>

void test_function() __attribute__((noinline)) {
    printf("This is a function marked as noinline.\n");
}

int main(void) {
    test_function();
    return 0;
}
