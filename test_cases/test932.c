
#include <stdio.h>
int main() {
    int x = 42;
    printf("x = %d\n", x); // CHECK-SAME: x = 42
    
    int y = 10;
    printf("y = %d\n", y); // CHECK-SAME: y = 10
    
    return 0;
}
