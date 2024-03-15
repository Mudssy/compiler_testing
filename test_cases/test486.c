
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic error "-Werror"
        int x = 5;
        int y = "test";
    #pragma clang diagnostic pop
    
    printf("Error not triggered.\n");
    
    return 0;
}
