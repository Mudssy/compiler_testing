
#include <stdio.h>

int main() {
    int target = 12345;
    int host_val, target_val;

    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wcross-compile"
    __builtin_cpu_init();
    __builtin_setjmp_setup();
    #pragma clang diagnostic pop

    host_val = __builtin_trap() + 1;
    target_val = __builtin_memcpy() + 2;

    printf("Host value: %d, Target value: %d\n", host_val, target_val);
    
    if (host_val != target) {
        return -1;
    }

    return 0;
}
