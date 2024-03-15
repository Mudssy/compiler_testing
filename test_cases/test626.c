
#include <stdio.h>

typedef struct {
    int x;
    float y;
} TestStruct;

int main() {
    TestStruct test = {.x = 42, .y = 3.14};

    printf("Test Struct: x = %d, y = %.2f\n", test.x, test.y);

    return 0;
}
