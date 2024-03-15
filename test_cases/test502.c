
#include <stdio.h>

int main() {
    int x = 0;
    printf("Before no_sanitize_undefined:\n");
    printf("%d\n", x / x);
    
    __attribute__((no_sanitize_undefined)) int result = x / x;
    printf("After no_sanitize_undefined:\n");
    printf("%d\n", result);
    
    return 0;
}
