
#include <stdio.h>

int foo(int x) {
    if(x > 10) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    int result = foo(5);
    printf("Result: %d\n", result);
    return 0;
}
