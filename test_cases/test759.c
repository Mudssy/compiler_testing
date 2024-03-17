
#include <stdio.h>

int no_sanitize_function(int x) __attribute__((no_sanitize("undefined")));

int no_sanitize_function(int x) {
    return x * 2;
}

int main() {
    int result = no_sanitize_function(5);
    printf("Result: %d\n", result);
    return 0;
}
