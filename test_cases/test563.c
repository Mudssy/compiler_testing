
#include <stdio.h>

int main() {
    float f;
    double d;
    long double ld;
    
    // Test float type
    f = 12345.67890f;
    printf("float: %f\n", f);
    
    // Test double type
    d = 12345.67890123456789;
    printf("double: %lf\n", d);
    
    // Test long double type
    ld = 12345.67890123456789L;
    printf("long double: %Lf\n", ld);
    
    return 0;
}
