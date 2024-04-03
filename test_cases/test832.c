
#include <stdio.h>

int main() {
    int num = 5;
    
    // Test out of bounds array access
    int array[2] = {0, 1};
    if(num < 2) {
        printf("%d\n", array[num]);
    } else {
        fprintf(stderr, "ArrayIndexOutOfBoundsException: %s\n", "Index is out of bounds");
    }
    
    return 0;
}
