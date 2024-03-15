
#include <stdio.h>

int main() {
    int a = 42;
    int b = 0;
    try {
        if (b == 0) {
            throw "Division by zero condition!";
        }
        else {
            printf("The result is: %d\n", a / b);
        }
    } catch (const char* msg) {
        printf("%s\n", msg);
    }
    return 0;
}
