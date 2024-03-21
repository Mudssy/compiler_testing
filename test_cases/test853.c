
#include <stdio.h>

int main() {
    printf("Single Precision:\n");
    float x = 10.5f;
    float y = 20.7f;
    float z = x + y;
    
    printf("%.*g\n", __FLT_DIG__, z); // Print with single precision
    
    printf("Double Precision:\n");
    double a = 10.5;
    double b = 20.7;
    double c = a + b;
    
    printf("%.*g\n", __DBL_DIG__, c); // Print with double precision
    
    printf("Long Double Precision:\n");
    long double d = 10.5l;
    long double e = 20.7l;
    long double f = d + e;
    
    printf("%.*Lg\n", __LDBL_DIG__, f); // Print with long double precision
    
    return 0;
}
