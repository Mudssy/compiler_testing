
#include <stdio.h>

int main() {
    #pragma clang optimize on
    #pragma clang attribute no_sanitize_shadow on
    int x = 0;
    int y[10];
    
    printf("Address of y: %p\n", &y);
    printf("Address of x: %p\n", &x);
    #pragma clang attribute no_sanitize_shadow off
    return 0;
}
