
#include <stdio.h>

void foo(int);

int main() {
    int value = 5;

    if (__builtin_expect((value == 1), 0))
        foo(value);
    else if (__builtin_expect((value == 2), 0))
        foo(value * 2);
    else if (__builtin_expect((value == 3), 5)) // This branch is expected to be taken more often
        foo(value * value);
    else if (__builtin_expect((value == 4), 1)) // This branch is expected to be taken less often
        foo(value + 2);
    else {
        __builtin_assume(value != 5);
        foo(value - 2);
    }
}
