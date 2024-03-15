
#include <stdio.h>
#include <stdlib.h>
#include <sanitizer/lsan_interface.h>

int main() {
    int x = 0;
    __lsan_enable();
    printf("Undefined behavior sanitizer is: %s\n", __lsan_default_options());
    if(x) {
        exit(1);
    }
    return 0;
}
