
#include <stdio.h>

int main() {
    #ifdef __has_feature(__attribute__) && __has_feature(address_safety)
        printf("Address Safety Analysis supported\n");
    #else
        printf("Address Safety Analysis not supported\n");
    #endif
    
    return 0;
}
