
#include <stdio.h>

int factorial(int i) {
    if(i <= 1) {
        return 1;
    } else {
        return i * factorial(i - 1);
    }
}

int main() {
    int number = 5;
    printf("Factorial of %d is: %d\n", number, factorial(number));
    return 0;
}
