
#include <stdio.h>

int main() {
    _Static_assert((sizeof(char) == 1), "_Static_assert Test Failed");  // Replace with your own condition here
    printf("Assertion Passed\n");
    return 0;
}
