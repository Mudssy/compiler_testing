
#include <stdio.h>

typedef struct {
    int a;
    float b;
} TestStruct;

TestStruct create_struct(int a, float b) {
    return (TestStruct){ .a = a, .b = b };
}

int main() {
    TestStruct test = create_struct(5, 3.14);
    
    printf("TestStruct: a=%d, b=%.2f\n", test.a, test.b);
    
    return 0;
}
