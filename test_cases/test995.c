
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    
    if (a > 5) {
        b += a;
    } else {
        b -= a;
    }
    
    printf("The result is: %d\n", b);
    return 0;
}
