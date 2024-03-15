
#include <stdio.h>
#include <stdlib.h>

__attribute__((warn_unused_result))
int divide(int a, int b) {
    if (b == 0) {
        perror("Division by zero");
        exit(EXIT_FAILURE);
    }
    return a / b;
}

int main() {
    int result = divide(10, 2);
    printf("The result is: %d\n", result);

    result = divide(10, 0);
    printf("The result is: %d\n", result);

    return 0;
}
