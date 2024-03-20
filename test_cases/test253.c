
#include <stdio.h>

int main() {
    typedef struct { char c; long l; } s_t;
    printf("%zu\n", sizeof(s_t));
    printf("%zu\n", _Alignof(long double));
    printf("%zu\n", alignof(s_t));
}
