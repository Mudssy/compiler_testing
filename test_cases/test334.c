
#include <stdio.h>

// Define the annotation 
// annotate(custom_api, "my.annotation", { int a = 5; }) 
__attribute__((annotate("my.annotation"))) 
int a = 5;

int main() {
    printf("Value of 'a' is: %d\n", a);
    
    // Use the annotation 
    #pragma clang attribute push(__attribute__((annotate("my_other.annotation"))), apply_to=function) 

    void myFunction() {
        printf("This function is annotated.\n");
    }

    #pragma clang attribute pop

    return 0;
}
