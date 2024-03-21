
#include <stdio.h>

int main(void) {
    void (^block)(void) = ^{ printf("Hello World\n"); };
    block();
    return 0;
}
