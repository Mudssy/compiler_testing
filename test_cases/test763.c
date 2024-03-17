
#include <stdio.h>

void __attribute__((gnu_inline)) print_message() {
    printf("This is a message from the gnu_inline function.\n");
}

int main() {
    print_message();
    return 0;
}
