
#include <stdio.h>

int main() {
    int *p = NULL; // Define an integer pointer p which points to nothing
    
    // Attempting to dereference the null pointer should trigger a warning or error depending on the compiler settings
    printf("%d\n", *p); 
    
    return 0;
}
