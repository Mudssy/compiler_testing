
#include <stdio.h>

void __attribute__ ((noinline)) foo(void) {
    printf("Hello, I am 'foo'! Please don't clone me!\n");
}

int main() {
    if (__builtin_return_address(0) == __builtin_frame_address(0)) {
        printf("This is a normal call to foo!\n");
        foo();
    } else {
        printf("Hmm... This is not supposed to be cloned!\n");
    }
    return 0;
}
