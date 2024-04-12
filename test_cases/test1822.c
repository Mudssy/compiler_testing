
#include <stdio.h>

void misuseScopedObjects(int x) {
    int y = x;
    printf("The value of y is %d\n", y);
}

int main() {
    // Test case 1: Call function with a variable that will go out of scope.
    {
        int x = 42;
        misuseScopedObjects(x);
    }
    // Test case 2: Call function with a literal that has no associated memory location.
    misuseScopedObjects(1337);
    return 0;
}
