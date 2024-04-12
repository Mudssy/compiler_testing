
#include <stdio.h>

void checkEvenOrOdd(int num) {
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

int main() {
    int num = 7; // Replace with the number you want to test.
    checkEvenOrOdd(num);
    return 0; // This indicates successful execution.
}
