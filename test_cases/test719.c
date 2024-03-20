
#include <stdio.h>

// Inline function
static __inline__ char *alias_symbol() {
    // Use the address of the TLS variable as an alias symbol
    static __thread int tlsvar;
    return (char *)&tlsvar;
}

int main(void) {
    printf("Alias symbol: %p\n", alias_symbol());
    return 0;
}
