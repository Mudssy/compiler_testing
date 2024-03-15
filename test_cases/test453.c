
#include <stdio.h>

int main(void) {
    int value __attribute__((deprecated("This attribute is deprecated")));
    value = 42;
    printf("Value: %d\n", value);
    return 0;
}
