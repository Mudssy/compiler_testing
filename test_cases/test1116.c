
#include <stdio.h>

struct TestStruct {
    int a;
    float b;
};

union TestUnion {
    char c;
    double d;
};

int main() {
    struct TestStruct test_struct = {10, 20.5f};
    union TestUnion test_union = {'A'};
    
    printf("Struct member access: %d, %f\n", test_struct.a, test_struct.b);
    printf("Union member access: %c, %lf\n", test_union.c, test_union.d);
    
    return 0;
}
