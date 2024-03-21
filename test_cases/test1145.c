
#include <stdio.h>

int main() {
    float complex z = 3 + 4*I;
    printf("Real part: %f\n", __real__ z);
    printf("Imaginary part: %f\n", __imag__ z);

    return 0;
}
