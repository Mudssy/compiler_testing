
#include <stdio.h>
#include <stdatomic.h>

atomic_int acnt;

void f(void *arg) {
    for(int n = 0; n < 1000; ++n) {
        atomic_fetch_add(&acnt, 1);
    }
}

int main() {
    atomic_init(&acnt, 0);
    f(NULL);
    printf("%d\n", atomic_load(&acnt));
    return 0;
}
