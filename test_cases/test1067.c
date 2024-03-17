
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int result;
    
    if (a > b) {
        result = a + 5;
    } else {
        result = b - 3;
    }

    printf("The result is: %d\n", result);
    return 0;
}
