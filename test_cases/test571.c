
#include <stdio.h>

int main() {
    int a = 4;
    int b = 3;
    
    if ((a & 2) != 0) {
        printf("AND operation failed\n");
        return 1;
    }
    
    if ((b << 2) != 12) {
        printf("Left Shift operation failed\n");
        return 1;
    }
    
    if ((a >> 1) != 2) {
        printf("Right Shift operation failed\n");
        return 1;
    }
    
    printf("All tests passed\n");
    return 0;
}
