
#include <stdio.h>

int main() {
    int x = 0;
    #pragma omp atomic update
    x += 12345;

    printf("The updated value of x is: %d\n", x);
    return 0;
}
