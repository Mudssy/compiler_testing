
#include <stdio.h>

void my_function() {
    printf("Function Parsed\n");
}

int main() {
    void (*func_ptr)() = &my_function; // Function pointer declaration and assignment
    func_ptr(); // Calling the function through function pointer.
    return 0;
}
