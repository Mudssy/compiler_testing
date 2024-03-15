
#include <stdio.h>

int add_numbers(int a, int b);

int main() {
    int result = add_numbers(5, 10);
    printf("The sum of 5 and 10 is: %d\n", result);
    return 0;
}

int add_numbers(int a, int b) {
    return a + b;
}
