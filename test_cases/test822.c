
#include <stdio.h>

int main() {
    int x = 10;  // This is in the outer block
    printf("%d\n", x);
    
    if (x > 5) {
        int y = 20;  // This is in a block inside an "if" statement
        printf("%d %d\n", x, y);
    }
    
    return 0;
}
