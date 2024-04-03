
#include <stdio.h>

void __attribute__((no_sanitize("undefined"))) foo() {
    int a = 5;
    printf("%d\n", a);
}

int main() {
    foo();
    return 0;
}
