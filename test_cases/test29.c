
#include <stdio.h>

int main() {
    #define DEBUG_INFO 1
    printf("Is Debug Information Supported? ");
    
    #if DEBUG_INFO == 1
        printf("Yes\n");
    #else
        printf("No\n");
    #endif

    return 0;
}
