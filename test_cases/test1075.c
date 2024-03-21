
#include <stdio.h>

void func1() {
    printf("Function 1\n");
}

void func2() {
    printf("Function 2\n");
}

int main(void) {
    void (*func_ptr)(void); // Declare function pointer
    
    func_ptr = func1; // Assigning function to pointer
    func_ptr(); // Call function through pointer

    func_ptr = func2; // Changing assigned function through pointer
    func_ptr(); // Call function through pointer

    return 0; // Make sure the program ends properly and does not run forever.
}
