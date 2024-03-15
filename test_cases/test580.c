
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void print_result(int result) {
    printf("Result: %d\n", result);
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int sum = add(num1, num2);
    print_result(sum);
    return 0;
}
