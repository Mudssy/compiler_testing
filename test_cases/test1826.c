
#include <stdio.h>

int main() {
    int a = 10;
    const int* ptr = &a;
    
    printf("Value of 'ptr' before attempt to modify it: %d\n", *ptr);

    // Attempting to modify the value through a pointer-to-const. 
    // This will not compile with clang -Werror=pointer-to-int-cast, as expected.
    int* temp = (int*) ptr;
    *temp = 20;  // This line will result in undefined behavior, which we cannot test here.
    
    return 0;
}
