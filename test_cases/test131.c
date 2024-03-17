
#include <stdio.h>

int main() {
    // Test anonymous struct
    printf("Anonymous Struct:\n");
    struct { int x; int y; } point = { .x = 1, .y = 2 };
    printf("Point: (%d, %d)\n", point.x, point.y);

    // Test anonymous union
    printf("\nAnonymous Union:\n");
    union { int a; char b[4]; } data = { .a = 0x12345678 };
    printf("Hex: %#x\tBytes: ", data.a);
    for(int i = 0; i < 4; ++i) {
        printf("%d ", data.b[i]);
    }
    printf("\n");

    return 0;
}
