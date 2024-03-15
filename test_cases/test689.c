
#include <stdio.h>

typedef struct {
    int a;
    float b;
} TestStruct;

typedef union {
    char c;
    double d;
} TestUnion;

int main() {
    TestStruct ts = {10, 2.5};
    TestUnion tu;
    
    ts.a += 5;
    ts.b *= 2.0;
    printf("TestStruct: a=%d, b=%f\n", ts.a, ts.b);

    tu.c = 'A';
    tu.d += 10.0;
    printf("TestUnion: c=%c, d=%f\n", tu.c, tu.d);
    
    return 0;
}
