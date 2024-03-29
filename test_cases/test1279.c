
#include <stdio.h>
#include <assert.h>

int main() {
    int x = 5;
    
    assert(x == 5); // This will pass
    printf("Assertion passed for x == 5\n");

    assert(x != 10); // This will fail
    printf("Assertion failed for x != 10\n");

    return 0;
}
