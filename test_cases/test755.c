
#include <stdio.h>

void __attribute__((noinline, hot)) hot_function() {
    printf("This function is marked as hot!\n");
}

int main() {
    hot_function();
    return 0;
}
