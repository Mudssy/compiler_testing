
#include <stdio.h>

typedef struct {
    int x;
} S1;

typedef struct {
    double y;
} S2;

union U {
    S1 s1;
    S2 s2;
};

int main(void) 
{
    union U u = { .s1 = {5} }; // Initializes the first member of the union.

    printf("x: %d\n", u.s1.x); // Prints "x: 5"

    return 0; // The test case always returns.
}
