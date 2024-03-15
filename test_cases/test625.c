
#include <stdio.h>

typedef struct {
    int a;
    float b;
} TestStruct;

int main() {
    TestStruct test_struct = {10, 20.5};
    printf("Accessing Structure Members: %d and %.2f\n", test_struct.a, test_struct.b);
    return 0;
}
