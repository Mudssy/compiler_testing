
#include <stdio.h>
#include <stdatomic.h>

int main() {
    _Atomic(int) foo = 0;

    ++foo; // atomic increment

    printf("Value of foo: %d\n", atomic_load(&foo));
}
