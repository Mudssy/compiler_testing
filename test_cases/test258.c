
#include <stdio.h>

void __attribute__((constructor)) print_before_main(void) {
    printf("This is printed before the main function.\n");
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
