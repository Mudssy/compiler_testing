
#include <stdio.h>

int main(void) {
    int arr[5] = { [1] = 20, [3] = 40 };
    
    printf("arr[0]: %d\n", arr[0]); // expected to print 0
    printf("arr[1]: %d\n", arr[1]); // expected to print 20
    printf("arr[2]: %d\n", arr[2]); // expected to print 0
    printf("arr[3]: %d\n", arr[3]); // expected to print 40
    printf("arr[4]: %d\n", arr[4]); // expected to print 0
    
    return 0;
}
