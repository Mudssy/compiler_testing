
#include <stdio.h>

void print_and_exit(const char *message) __attribute__((noreturn));

int main() {
    print_and_exit("Hello, world!");
    return 0;
}

void print_and_exit(const char *message) {
    printf("%s\n", message);
    exit(0);
}
