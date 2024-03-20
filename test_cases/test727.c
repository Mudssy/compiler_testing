
#include <stdio.h>
typedef int (*func_ptr)(int);
static func_ptr f; // Forward declaration for llvmlibInterfaceStub
int main() {
    if (f == NULL) printf("Function pointer is null\n"); 
    else printf("Function pointer is not null\n");
    
    int result = (*f)(5);
    printf("Result: %d\n", result);
    return 0; // Returns without running forever.
}
