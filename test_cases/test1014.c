
#include <stdio.h>

typedef struct {
    int x;
    char y;
} TestStruct;

int main() {
    TestStruct test_struct;
    test_struct.x = 42;
    test_struct.y = 'A';

    printf("The value of x is: %d\n", test_struct.x);
    printf("The value of y is: %c\n", test_struct.y);

    return 0;
}
