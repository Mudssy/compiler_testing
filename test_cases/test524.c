
#include <stdio.h>
#include <x86intrin.h>

int main() {
    const char *message = "Builtin Prefetch Operations feature is supported by this compiler.\n";
    _mm_prefetch(message, _MM_HINT_T0);

    printf("%s", message);
    
    return 0;
}
