
#include <stdio.h>

void foo(int);

int main() {
    int value = 5;

    if (__builtin_expect((value == 1), 0))
        foo(value);
    else if (__builtin_expect((value == 2), 0))
        foo(value * 2);
    else if (__builtin_expect((value == 3), 5)) // This branch is expected to be taken, but it's not.
        foo(value / 2);
    else if (__builtin_expect((value == 4), 0))
        foo(value + 1);
    else {   // This is the default branch that should be taken here
        printf("Value: %d\n", value);
        return -1;
    }

    return 0;
}

void foo(int val) {
    printf("%d\n", val);
}
