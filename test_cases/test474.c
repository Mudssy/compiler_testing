
#include <stdio.h>

void __cdecl func(__int8_t a, __int16_t b, __int32_t c, __int64_t d) {
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %ld\n", c);
    printf("d = %lld\n", d);
}

int main() {
    __int8_t a = 1;
    __int16_t b = 2;
    __int32_t c = 4;
    __int64_t d = 8;

    func(a, b, c, d);
}
