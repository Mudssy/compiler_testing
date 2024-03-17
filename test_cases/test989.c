
#include <stdio.h>

int main() {
    int x = 0;
    int y = 1;
    int z = -1;
    
    if (x > y) {
        printf("x is greater than y\n");
    } else if (y == z) {
        printf("y is equal to z\n");
    } else {
        printf("y is greater than x and not equal to z\n");
    }
    
    return 0;
}
