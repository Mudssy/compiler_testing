
#include <stdio.h>
#include <stdatomic.h>

_Atomic(int) global = 0;

void tgeFunc() {
    _Atomic(int) local = 0;
    ++local;
    printf("%d\n", atomic_load(&global));
}

int main() {
    tgeFunc();
    return 0;
}
