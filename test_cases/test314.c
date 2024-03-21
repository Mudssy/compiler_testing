
#include <stdio.h>
#include <os/availability.h>

void print_message() {
    printf("This message is for platforms that support this function.\n");
}

int main(void) {
    if (__builtin_available(macOS 10.15, iOS 13.0, *)) {
        print_message();
        return 0;
    } else {
        printf("This platform does not support this feature.\n");
        return -1;
    }
}
