
#include <stdio.h>
typedef int (*func_ptr)(int);
static func_ptr f; // Forward declaration for llvmlibInterfaceStub

// Define a simple function that can be used as the target of f
int some_function(int x) {
    return x * 2;
}

int main() {
    if (f == NULL) printf("Function pointer is null\n"); 
    else printf("Function pointer is not null\n");
    
    // Assign the function to f
    f = &some_function;
    
    int result = (*f)(10); // Call the function through the function pointer
    printf("%d\n", result); 

    return 0;
}
