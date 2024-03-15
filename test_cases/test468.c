
#include <stdio.h>

int main() {
    int foo[] = [1, 2, 3];
    int foo_length __attribute__((unused)) = sizeof(foo) / sizeof(foo[0]);

    for (int i = 0; i < foo_length; i++) {
        printf("Foo element at index %d is: %d\n", i, foo[i]);
    }

    return 0;
}
