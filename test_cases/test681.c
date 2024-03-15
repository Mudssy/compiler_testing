
#include <stdio.h>

int dependency_injection(int a) {
    return a * 2;
}

int main() {
    int input = 5;
    int result = dependency_injection(input);
    printf("The result of the dependency injection is: %d\n", result);
    return 0;
}
