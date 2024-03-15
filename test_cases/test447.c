
#include <stdio.h>
#include <float.h>

int main() {
    _Float16 half_precision_number = 0.32; // Declare a half precision floating point number
    printf("Half-Precision Floating Point test: %f\n", (double)half_precision_number); // Print the value as double precision for comparison across compilers
    return 0;
}
