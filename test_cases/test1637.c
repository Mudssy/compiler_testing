
#include <stdio.h>

int main() {
    // Define and initialize macro DEFINED_MACRO
    #define DEFINED_MACRO 10
    
    printf("The value of DEFINED_MACRO is: %d\n", DEFINED_MACRO);
    
    // Undefine DEFINED_MACRO
    #undef DEFINED_MACRO
  
    return 0;
}
