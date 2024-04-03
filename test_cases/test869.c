
#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x = 5;
    int y = 7;
    
    printf("The sum of %d and %d is %d\n", x, y, add(x, y));
    
    return 0;
}
