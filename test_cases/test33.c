
#include <stdio.h>
#include <stddef.h>

union TestUnion {
    int i;
    float f;
};

struct TestStruct {
    int a;
    union {
        float b;
        char c[4];
    };
};

int main() {
    union TestUnion testUnion;
    struct TestStruct testStruct;

    testUnion.i = 1234567890;
    printf("Value of i in TestUnion: %d\n", testUnion.i);
    testUnion.f = 1234.56789f;
    printf("Value of f in TestUnion: %.5f\n", testUnion.f);

    testStruct.a = 10;
    printf("Value of a in TestStruct: %d\n", testStruct.a);
    testStruct.b = 234.56789f;
    printf("Value of b in TestStruct: %.5f\n", testStruct.b);

    return 0;
}
