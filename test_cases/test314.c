
#include <stdio.h>

void print_message() {
    printf("This message is for platforms that support this function.\n");
}

int main(void) {
    #if defined(__APPLE__) && (__MAC_OS_X_VERSION_MIN_REQUIRED >= 1090)
        /* Apple-specific API available */
        print_message();
    #else
        printf("This platform does not support this function.\n");
    #endif
    
    return 0;
}
