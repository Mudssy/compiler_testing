
#include <stdio.h>

void test_argument(int a, int* b) {
    *b = htons(*b);
    printf("%d\n", a + *b);  // This line is needed for the output to be different based on the endianness of the system.
}

int main() {
    unsigned short x = 0x1234;
    int y = 5;
    test_argument(y, &x);
    
    return 0;
}
