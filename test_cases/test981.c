
#include <stdio.h>

int foo(int a) {
    int result = 0;
    if (a > 10) {
        result = 1;
    } else {
        result = 2;
    }
    return result;
}

int main() {
    int x = 5;
    int y = foo(x);

    printf("Result: %d\n", y); // Output will be "Result: 2" if the feature is not supported or "Result: 1" if it is.
    return 0;
}
