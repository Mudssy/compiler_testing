
#include <stdio.h>

int add(int a, int b) {
    // This function will be inlined by the optimizer.
    return a + b;
}

int main() {
    int result = add(5, 3);
    printf("The result of adding 5 and 3 is: %d\n", result);
    return 0;
}
