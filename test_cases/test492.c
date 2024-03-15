
#include <stdio.h>
#ifdef __clang__
    _Thread_local int tls_var = 10;
#else
    static int tls_var = 10;
#endif
int main() {
    printf("Initial value of TLS variable: %d\n", tls_var);
    tls_var += 5;
    printf("Value after modification: %d\n", tls_var);
    return 0;
}
