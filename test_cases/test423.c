
#include <stdio.h>

typedef struct {
    int a;
    float b;
} TestStruct;

int main() {
    TestStruct test = { .a = 42, .b = 3.14 };
    printf("TestStruct: a = %d, b = %.2f\n", test.a, test.b);
    return 0;
}
