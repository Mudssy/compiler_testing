
#include <stdio.h>

__attribute__((noinline)) void my_func(void) {
    printf("Hello from my_func!\n");
}

int main() {
    my_func();
    return 0;
}
