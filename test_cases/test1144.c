
#include <stdio.h>

typedef union {
    int i;
    float f;
} num;

int main() {
    num value = { .f = 1.23 }; // This is a transparent union, you can access the floating point directly.
    
    printf("Value as an integer: %d\n", value.i);
    printf("Value as a float: %f\n", value.f);

    return 0;
}
