
#include <stdio.h>

int main() {
    int i;  // Old-style declaration
    testFunction(5);  // Function prototype
    return 0;
}

void testFunction(int x) {
    printf("Value is: %d\n", x);
}
