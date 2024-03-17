
#include <stdio.h>

void __attribute__((nonnull)) function_stub(int *a, int *b) {
    if (*a > *b) {
        printf("First number is greater.\n");
    } else if (*a < *b) {
        printf("Second number is greater.\n");
    } else {
        printf("Both numbers are equal.\n");
    }
}

int main() {
    int a = 10;
    int b = 5;
    function_stub(&a, &b);
    return 0;
}
