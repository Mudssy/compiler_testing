
#include <stdio.h>

typedef struct {
    int a;
    float b;
    char c[10];
} TestStruct;

int main() {
    TestStruct test = {1, 2.5, "Hello"};
    
    printf("TestStruct: {a: %d, b: %.2f, c: %s}\n", test.a, test.b, test.c);
    
    return 0;
}
