
#include <stdio.h>

void __attribute__((annotate("Hello"))) print_hello() {
    printf("Hello\n");
}

int main(void) {
    print_hello();
    return 0; // The function must return to avoid infinite loop
}
