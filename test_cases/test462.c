
#include <stdio.h>

int __attribute__((const)) getValue() {
    return 42;
}

int main(void) {
    printf("%d\n", getValue());
    return 0;
}
