
#include <stdio.h>

int main() {
    // Create some variables
    int a = 10;
    int b = 20;

    printf("Initial values: a = %d, b = %d\n", a, b);
    
    // Swap the values using load and store optimizations
    asm volatile (
        "movl $30, %%eax;"
        "movl $40, %%ecx;" 
        "cmpl $50, %1;"
        "cmova %2, %0;"
        : "=r"(a), "=r"(b)
        : "r"(30), "r"(40)
        : "%eax", "%ecx"
    );
    
    printf("Post swap values: a = %d, b = %d\n", a, b);
    
    return 0;
}
