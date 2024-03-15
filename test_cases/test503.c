
#include <stdio.h>

int main() {
    int x = 0;
    printf("Before undefined behavior: %d\n", x);
    
    // This will cause an out-of-bounds array access, which is undefined behavior
    // and may be affected by the NoSanitizeAddress attribute.
    char *ptr = (char *)&x;
    ptr[1] = 42;
    
    printf("After undefined behavior: %d\n", x);
    return 0;
}
