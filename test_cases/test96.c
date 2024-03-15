
#include <stdio.h>

typedef struct {
    int a;
    int b;
} TestStruct;

int main() {
    TestStruct test_struct = {10, 20};
    printf("Value of member 'a': %d\n", test_struct.a);
    printf("Value of member 'b': %d\n", test_struct.b);
    return 0;
}
