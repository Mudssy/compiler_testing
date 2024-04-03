
#include <stdio.h>

int main() {
    if (__builtin_expect(1, 0)) {
        printf("Hello\n");
    } else {
        printf("World\n");
    }

    return 0;
}
