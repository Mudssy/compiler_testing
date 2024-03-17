
#include <stdio.h>

struct TestStruct { int a; };
union TestUnion { int a; float b; };
enum TestEnum { A = 0, B = 1 };

int main(void) {
    struct TestStruct ts = { .a = 5 };
    union TestUnion tu;
    enum TestEnum te = A;
    
    printf("Test Passed\n");

    return 0;
}
