
#include <stdio.h>

int main() {
    #ifdef __STDC__
        printf("The compiler supports ISO C90\n");
    #endif
    
    #if __STDC_VERSION__ >= 201710L
        printf("The compiler supports ISO C18\n");
    #else
        printf("The compiler does not support ISO C18\n");
    #endif
        
    #warning "This is a warning message"
    
    #error "This is an error message"
        
    return 0;
}
