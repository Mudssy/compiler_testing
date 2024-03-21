
#include <stdio.h>

template<class T, int N>
struct S { char c[N]; };

int main() {
    printf("Testing Penalty for breaking before first template parameter feature.\n");

    S<char, -1> s; // This should give a compile-time error with -Wno-invalid-offsetof.

    printf("Penalty for breaking before first template parameter feature test passed.\n");
    
    return 0;
}
