
#include <stdio.h>

void func(void) { printf("Hello from func\n"); }

int main() {
    void (*fptr)(void); // Declare a function pointer fptr
    fptr = &func; // Assign the address of func to fptr
    
    /* Call the function through the function pointer */
    printf("Calling func indirectly\n");
    fptr();

    return 0;
}
