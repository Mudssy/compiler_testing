
#include <stdio.h>

// Vectorcall Calling Convention Test
typedef void (*VectorcallFunction)(int, float, double);
void __vectorcall vectorcall_function(int a, float b, double c) {
    printf("Vectorcall Calling Convention Test: %d, %.2f, %.2f\n", a, b, c);
}

int main() {
    VectorcallFunction func = &vectorcall_function;
    int test_a = 42;
    float test_b = 3.14f;
    double test_c = 1.61803398875;
    
    (*func)(test_a, test_b, test_c);
    
    return 0;
}
