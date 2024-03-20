
#include <stdio.h>

// This is the function we will annotate
int __attribute__((nonnull(1))) my_function(char* str) {
    printf("%s\n", str);
    return 0;
}

// Main function to test attribute annotation
int main() {
    // Invoke my_function with a null pointer which should trigger a warning/error
    // according to the compiler's implementation of the nonnull attribute
    char* s = NULL;
    int result = my_function(s); 
  
    return 0; 
}
