
#include <stdio.h>
#include <setjmp.h>

static jmp_buf env;

void do_longjmp() {
    longjmp(env, 1);
}

int main() {
    int val = setjmp(env);
    if (val == 0) {
        printf("First call to setjmp\n");
        do_longjmp();
    } else {
        printf("Long jump called\n");
    }
    return 0;
}
