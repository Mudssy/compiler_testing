
#include <stdio.h>
#include <inttypes.h>

extern char _etext, _edata, _end;

void *getBaseAddr() {
    uintptr_t thisAddr = (uintptr_t)&_etext;
    return (void*)thisAddr;
}

int main(void) {
    if((uintptr_t)main > (uintptr_t)(&_end))
        printf("PIC code, base address: %p\n", getBaseAddr());
    else
        printf("Direct-execution code\n");
    
    return 0;
}
