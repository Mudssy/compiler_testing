
#include <stdio.h>

int main() {
    int result = 0;

    void innerFunction(int x) {
        result += x;
    }

    innerFunction(5);
    innerFunction(10);
    innerFunction(15);

    printf("The result is: %d\n", result);

    return 0;
}
