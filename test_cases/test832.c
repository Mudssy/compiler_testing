
#include <stdio.h>

int main() {
    int num = 5;
    
    try {
        // Test out of bounds array access
        int array[2] = {0, 1};
        printf("%d\n", array[num]);
        
    } catch (ArrayIndexOutOfBoundsException e) {
        printf("Caught ArrayIndexOutOfBoundsException: %s\n", e.getMessage());
    }
    
    return 0;
}
