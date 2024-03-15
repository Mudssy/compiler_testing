
#include <stdio.h>

template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    float p = 5.5, q = 7.3;

    printf("The sum of the integers is: %d\n", add(x, y));
    printf("The sum of the floats is: %.2f\n", add(p, q));

    return 0;
}
