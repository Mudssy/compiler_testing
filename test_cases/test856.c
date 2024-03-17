
#include <stdio.h>

int main() {
    int result = 0;
    
    int add(int a, int b) {
        return a + b;
    }
    
    result = add(5, 10);
    
    printf("Result: %d\n", result);
    
    return 0;
}
