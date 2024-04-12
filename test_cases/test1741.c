
#include <stdio.h>

// Define two typedefs for `int` type
typedef int MyType1;
typedef int MyType2;

// Create a function pointer using one of the aliased types
void (*func_ptr)(MyType1);

// Function that accepts a MyType1 argument
void print_number(MyType1 num) {
    printf("%d\n", num);
}

int main() {
    // Initialize func_ptr with print_number function
    func_ptr = &print_number;
    
    // Use the typedefs in other operations
    MyType2 num = 10;
    
    // Call the function pointer
    (*func_ptr)(num);
    
    return 0;
}
