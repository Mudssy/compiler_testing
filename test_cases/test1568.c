
#include <stdio.h>

void foo() {
    static int x = 5;
    printf("%d\n", x);
}

int main() {
    foo();
    return 0;
}
