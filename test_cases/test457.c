
#include <stdio.h>

void __attribute__((alias("test_function"))) aliased_function(void);

void test_function() {
    printf("Alias attribute feature is supported.\n");
}

int main() {
    aliased_function();
    return 0;
}
