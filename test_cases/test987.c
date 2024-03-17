
#include <stdio.h>

int foo(int a) {
    int result;

    if (a > 5) {
        result = a * 2;
    } else {
        result = a + 2;
    }

    return result;
}

int main() {
    int i, j;

    for (i = 0; i < 10; i++) {
        j = foo(i);
        printf("foo(%d) = %d\n", i, j);
    }

    return 0;
}
