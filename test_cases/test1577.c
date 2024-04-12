
#include <stdio.h>

inline void foo() {
    printf("Inlined\n");
}

int main(void) {
    foo();
    return 0;
}
