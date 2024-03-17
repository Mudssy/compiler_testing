
#include <stdio.h>

int weak_func(void) __attribute__((weak));
int weak_func(void) {
    return 42;
}

int main() {
    if (&weak_func) {
        printf("Weak symbol supported: Yes\n");
    } else {
        printf("Weak symbol supported: No\n");
    }

    return 0;
}
