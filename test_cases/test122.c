
#include <stdio.h>

int main() {
    int array[5] = { [2] = 5, [3] = 10 };
    
    printf("array[0]: %d\n", array[0]); // should print 0
    printf("array[1]: %d\n", array[1]); // should print 0
    printf("array[2]: %d\n", array[2]); // should print 5
    printf("array[3]: %d\n", array[3]); // should print 10
    printf("array[4]: %d\n", array[4]); // should print 0
    
    return 0;
}
