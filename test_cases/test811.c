
#include <stdio.h>

int main() {
    #define llvmunittests 1
    
    #ifdef llvmunittests
        printf("Line control feature supported.\n");
    #else
        printf("Line control feature not supported.\n");
    #endif

    return 0;
}
