
#include <stdio.h>

int main() {
    printf("This is an example of using #include with a specific path.\n");
    
    // The next line will generate a compiler error if usrinclude is not supported.
    #include "not_existing_file.h" 

    return 0;
}
