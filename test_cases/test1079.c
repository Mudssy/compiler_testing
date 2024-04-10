
#include <stdio.h>

// Simulate template parameter
#define S(T, N) struct { T c[N]; }

int main() 
{
    printf("Testing Penalty for breaking before first template parameter feature.\n");

    // Simulate template instantiation with positive value (1)
    S(char, 1) s;
    
    printf("Penalty for breaking before first template parameter feature: %s\n", s.c);
}
