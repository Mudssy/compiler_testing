
#include <stdio.h>

__attribute__((noinline)) int foo(int x) {
    if (x > 0)
        __builtin_expect(!!(x < 5), 1); // The branch is more likely to be taken, so give it a weight of 1
    else
        __builtin_expect(!!(x > -5), 2); // The branch is less likely to be taken, so give it a weight of 2
}

int main() {
    for (int i = 0; i < 10; i++)
        foo(i);
    return 0;
}
