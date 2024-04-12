
#include <stdio.h>

int main() {
    #ifdef __STDC__
        printf("__STDC__ is defined\n");
    #else
        printf("__STDC__ is not defined\n");
    #endif
    
    return 0;
}
