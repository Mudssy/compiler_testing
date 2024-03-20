
#include <stdio.h>

typedef union {
  int i;
  float f;
} u_t;

int main() {
    u_t u = { .f = 3.14 };
    
    printf("u.i = %d\n", u.i); // Accessing the integer representation of a floating point number
    printf("u.f = %f\n", u.f); // Directly accessing the float member
    
    return 0;
}
