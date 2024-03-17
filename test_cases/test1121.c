
#include <stdio.h>

typedef struct {
    int x;
    float y;
    char z;
} TestStruct;

int main() {
    TestStruct t = { .z = 'A', .y = 3.14, .x = 42 };

    printf("TestStruct:\n");
    printf("  x: %d\n", t.x);
    printf("  y: %f\n", t.y);
    printf("  z: %c\n", t.z);

    return 0;
}
