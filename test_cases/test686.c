
#include <stdio.h>

// Declare macro to instantiate and redefine function 
#define DECLARE_PRINT(TYPE) void print_value_##TYPE(TYPE value) { printf("%d\n", value); }
// Instantiate functions for types you want to use
DECLARE_PRINT(int)
DECLARE_PRINT(float)
DECLARE_PRINT(double)

int main() {
    // Use instantiated functions
    int x = 5;
    print_value_int(x);
    
    float y = 3.14f;
    print_value_float(y);
    
    double z = 2.71828;
    print_value_double(z);
    
    return 0;
}
