
#include <stdio.h>

int main() {
    // This is a designated initializer example from C99 standard.
    struct { int x; char c; } s = { .x = 10, .c = 'a' };

    printf("Designated Initializers: %d %c\n", s.x, s.c);

    return 0;
}
