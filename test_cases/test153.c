
#include <stdio.h>

// Define the print macro with three arguments, int, double and char*
#define print(i) _Generic((i), \
    int: print_int, \
    double: print_double, \
    default: print_char \
)(i)

void print_int(int i){ printf("Int : %d\n", i); }
void print_double(double d){ printf("Double : %f\n", d); }
void print_char(const char* s){ printf("Char : %s\n", s); }

// Test cases 
int main() {  
    int a = 5;
    double b = 10.432;
    const char *c = "test";

    print(a); // prints Int: 5
    print(b); // prints Double: 10.432000
    print(c); // prints Char : test
    
    return 0;
}
