
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    
    // Testing if condition with a > b
    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("b is greater or equal to a\n");
    }

    // Testing nested if-else conditions
    if (a > b) {
        printf("a is greater than b\n");
    } else if (a == b) {
        printf("a is equal to b\n");
    } else {
        printf("b is greater than a\n");
    }
    
    return 0;
}
