
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    
    printf("Value at ptr is %d\n", *ptr);
    
    ptr++;
    printf("Value at ptr after incrementing is %d\n", *ptr);
    
    ptr--;
    printf("Value at ptr after decrementing is %d\n", *ptr);
    
    int *ptr2 = ptr + 2;
    printf("Value at ptr2 is %d\n", *ptr2);
    
    ptr2 -= 3;
    printf("Value at ptr2 after subtracting 3 is %d\n", *ptr2);
    
    return 0;
}
