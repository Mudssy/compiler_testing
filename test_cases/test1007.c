
#include <stdio.h>

int main() {
    int x = 10;
    
    // Test pointer arithmetic
    int *ptr = &x;
    printf("Value of ptr before incrementing: %d\n", *ptr);
    ptr++;  // This might be allowed or not, depending on the compiler
    printf("Value of ptr after incrementing: %d\n", *ptr);
    
    // Test reference arithmetic
    int &ref = x;
    printf("Value of ref before incrementing: %d\n", ref);
    ref++;  // This might be allowed or not, depending on the compiler
    printf("Value of ref after incrementing: %d\n", ref);
    
    return 0;
}
