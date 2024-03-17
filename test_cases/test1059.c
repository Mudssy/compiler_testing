
#include <stdio.h>

#define PRINT_ALIGNED(type, value) \
    printf("%-20s: %p\n", #type, (void *) &value);

int main() {
    long double a;
    int b __attribute__((aligned(16)));

    PRINT_ALIGNED(long double, a);
    PRINT_ALIGNED(int, b);

    return 0;
}
