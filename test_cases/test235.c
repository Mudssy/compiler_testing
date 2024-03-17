
#include <stdio.h>
int main() {
    _Bool a = 0; // Initializing a _Bool variable
    if(a) {
        printf("Compiler supports the _Bool type\n");
    } else {
        printf("Compiler does not support the _Bool type\n");
    }
    return 0;
}
