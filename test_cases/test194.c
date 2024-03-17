
#include <stdio.h>
#define suspend() __extension__({static int __coro_state=0; switch(__coro_state) {case 0: ; case 1: __coro_state=0; default: return;}})

int coroutine(void) {
    printf("Hello ");
    suspend();
    printf("World\n");
}

int main() {
    while (coroutine());
    return 0;
}
