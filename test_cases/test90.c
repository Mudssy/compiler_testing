
#include <stdio.h>

int main() {
    int result = testReturn();
    printf("The value returned from testReturn(): %d\n", result);
    return 0;
}

int testReturn() {
    int a = 5, b = 10;
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
