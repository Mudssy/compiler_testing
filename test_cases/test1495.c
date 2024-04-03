
#include <stdio.h>

int main() {
    // Explicit Type Casting
    int intValue = 10;
    float floatValue = (float) intValue / 2;
    printf("Explicit Type Casting: %f\n", floatValue);
    
    // Implicit Type Conversions - Widening
    char charValue = 'A';
    int widenInt = charValue;
    printf("Implicit Type Conversion (Widening): %d\n", widenInt);

    // Implicit Type Conversions - Narrowing
    double doubleValue = 12.34567890;
    float narrowFloat = doubleValue;
    int narrowInt = doubleValue;
    printf("Implicit Type Conversion (Narrowing): %f, %d\n", narrowFloat, narrowInt);

    return 0;
}
