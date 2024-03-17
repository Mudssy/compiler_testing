
#include <stdio.h>

template<int N>
void square() {
    printf("%d ", N * N);
}

int main() {
    // Test with different values
    square<1>();   // Outputs: 1
    square<2>();   // Outputs: 4
    square<3>();   // Outputs: 9
    square<4>();   // Outputs: 16
    return 0;
}
