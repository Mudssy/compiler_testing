
#include <stdio.h>

int shadowing_test() {
    int a = 5;
    int b = 10 * a;
    
    if (a == 5) {
        int a = 10;
        printf("Inside if: %d\n", a);
    }
    
    return b;
}

int main() {
    int result = shadowing_test();
    printf("Result: %d\n", result);

    return 0;
}
