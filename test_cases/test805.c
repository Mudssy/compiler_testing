
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

float add_f(float a, float b) {
    return a + b;
}

void print_sum(int n1, int n2, float f1, float f2) {
    printf("Sum of integers: %d\n", add(n1, n2));
    printf("Sum of floats: %f\n", add_f(f1, f2));
}

int main() {
    int a = 5;
    int b = 10;
    float c = 5.5;
    float d = 10.6;

    print_sum(a, b, c, d);

    return 0;
}
