
#include <stdio.h>

static inline void print_inline() {
    printf("Inside inline function\n");
}

void print_normal() {
    printf("Inside normal function\n");
}

int main() {
    print_inline();
    print_normal();
    return 0;
}
