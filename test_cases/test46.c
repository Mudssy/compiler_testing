
#include <stdio.h>

// Function declaration / prototype
void foo(void);

int main(void) {
    printf("Inside main\n");
    
    // Calling the function
    foo();
    
    return 0;
}

void foo(void){
    printf("Function foo called\n");
}
