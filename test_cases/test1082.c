
#include <stdio.h>
#include <stdalign.h>  // This library provides alignof() function.

int main() {
    typedef struct foo_struct { char x; long long y; } foo;  // Avoid using system-reserved names (like 'foo') for type names.
    printf("%zu %zu\n", sizeof(foo), _Alignof(foo));  // C standard doesn't support alignof in size_t, use the equivalent _Alignof() macro instead.
    return 0;
}
