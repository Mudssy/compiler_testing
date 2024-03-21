
#include <stdio.h>

struct align {
    char a;
    int b;
} __attribute__ ((aligned (16)));

int main(void) {
    struct align test;
    printf("Address of 'a' in structure: %p\n", &test.a);
    printf("Address of 'b' in structure: %p\n", &test.b);

    return 0;
}
