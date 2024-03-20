
#include <stdio.h>

int main() {
    int a = 5;
    __attribute__((no_sanitize("undefined")))  {
        printf("%d\n", a);
    }
    return 0;
}
