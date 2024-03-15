
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wunused-attribute"
        __attribute__((unused)) int x = 10;
    #pragma clang diagnostic pop
    
    printf("Test case for unused attribute feature in C.\n");
    return 0;
}
