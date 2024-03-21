
#include <stdio.h>
#include <string.h>

// User-defined literals handling (for C++ compatibility)
long double operator"" _kg(long double x) { return x * 1000; }
long double operator"" _g( long double x) { return x; }
long double operator"" _mg(long double x) { return x / 1000; }

int main() {
    long double weight_in_kg = 1.0_kg;
    printf("Weight in kg: %Lf\n", weight_in_kg);
    
    long double weight_in_g = 2000.0_mg;
    printf("Weight in g: %Lf\n", weight_in_g);

    return 0;
}
