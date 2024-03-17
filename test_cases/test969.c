
#include <stdio.h>

int firstFunction(int a, int b) {
    return a * b;
}

int secondFunction(int a, int b) {
    return a / b;
}

void thirdFunction(int a, int b) {
    if (a > b) {
        firstFunction(a, b);
    } else {
        secondFunction(a, b);
    }
}

int main() {
    int result1 = firstFunction(5, 3);
    int result2 = secondFunction(6, 2);
    
    printf("Result of first function: %d\n", result1);
    printf("Result of second function: %d\n", result2);

    thirdFunction(result1, result2);

    return 0;
}
