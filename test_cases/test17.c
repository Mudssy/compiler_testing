
#include <stdio.h>

typedef struct {
    int x;
    float y;
} TestStruct;

int main() {
    TestStruct test = {42, 3.14};
    printf("TestStruct size: %lu\n", sizeof(test));
    printf("TestStruct members:\nx - %d\ny - %.2f\n", test.x, test.y);
    return 0;
}
