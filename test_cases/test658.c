
#include <stdio.h>
#include <threads.h>

_Thread_local int tls_var = 10;

int main() {
    printf("Before: %d\n", tls_var);
    tls_var += 5;
    printf("After: %d\n", tls_var);
    return 0;
}
