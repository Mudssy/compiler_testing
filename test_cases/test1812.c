
#include <stdio.h>

int main() {
    int x = 2147483640;  // Maximum value an int can hold
    printf("Before addition: %d\n", x);
    
    x = x + 10;
    printf("After addition: %d\n", x);

    return 0;
}
