
#include <stdio.h>

int main(void) {
    int arr[] = {[2] = 1, [5] = 3};
    
    printf("arr[0]: %d\n", arr[0]); // should print 0 as it's not initialized explicitly
    printf("arr[2]: %d\n", arr[2]); // should print 1
    printf("arr[4]: %d\n", arr[4]); // will be zero as we skipped indices 3 and 5 in the initializer list, so it's not initialized explicitly
    printf("arr[5]: %d\n", arr[5]); // should print 3
    
    return 0;
}
