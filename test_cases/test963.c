
#include <stdio.h>

int main() {
    typedef struct {
        int a;
        float b;
    } TestStruct;

    TestStruct my_struct = {42, 3.14};

    printf("TestStruct: %d, %.2f\n", my_struct.a, my_struct.b);

    return 0;
}
