
#include <stdio.h>

int main() {
    int x = 10;
    while(x > 0) {
        printf("The value of x is: %d\n", x);
        x--;
        if (x == 5) {
            break;
        }
    }
    return 0;
}
