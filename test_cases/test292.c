
#include <stdio.h>
#include <setjmp.h>
#include <signal.h>

sigjmp_buf jmp;

void sigfpe() {
    siglongjmp(jmp, 1);
}

int main() {
    signal(SIGSEGV, sigfpe);
    if (sigsetjmp(jmp, 1)) {
        printf("Stack Protection Enabled\n");
    } else {
        char large_stack[1024*1024];
        large_stack[1024] = 5; // this should cause a segmentation fault
        printf("Something went wrong\n"); 
    }
    return 0;
}
