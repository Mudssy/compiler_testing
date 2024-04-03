
#include <stdio.h>

template<class T, int N>
struct S { char c[N]; };

int main() {
    printf("Testing Penalty for breaking before first template parameter feature.\n");

    // Here we make the value of N a positive number (1).
    S<char, 1> s; // This should compile with -Wno-invalid-offsetof.

    printf("Penalty for breaking before first template parameter feature: %s\n", s.c);
}
