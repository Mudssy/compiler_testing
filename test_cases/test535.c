
#include <stdio.h>

void print_address(const void *addr) {
    printf("Address: %p\n", addr);
}

int main() {
    int x = 10;
    int y = 20;
    print_address(__builtin_return_address(0));
    if (x < y) {
        print_address(__builtin_return_address(1));
    } else {
        print_address(__builtin_return_address(1));
    }
    return 0;
}
