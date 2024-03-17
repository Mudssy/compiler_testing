
#include <stdio.h>

struct TestStruct {
    int a;
    int b;
};

int main() {
    struct TestStruct ts = { .b = 2, .a = 1 };
    
    printf("ts.a: %d\n", ts.a);
    printf("ts.b: %d\n", ts.b);
    return 0;
}
