
#include <stdio.h>

// Define a function in an external library (i.e., libTestLib.a)
int add(int x, int y);

void main() {
    // Use the function from the static library
    printf("Static Add: %d\n", add(10, 2));
}
