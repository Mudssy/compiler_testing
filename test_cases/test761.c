
#include <stdio.h>

void func() __attribute__((nothrow));

int main(void) {
    if (func != 0) {
        printf("Function is nothrow\n");
    } else {
        printf("Function is throw\n");
    }
    
    return 0;
}
