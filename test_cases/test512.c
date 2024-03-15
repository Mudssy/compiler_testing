
#include <stdio.h>
#include <stdlib.h>

void print_address(const void *ptr) {
    printf("Address: %p\n", ptr);
}

int main() {
    int i = 0;
    const char *str = "Hello, Address Sanitizer!";

    __asm__("" : "=r"(i) : "0"(i)); // Attempt to break the optimization

    print_address(&i);
    printf("%s\n", str);
    print_address((void *)str);

    return 0;
}
