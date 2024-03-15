
#include <stdio.h>
#include <setjmp.h>

jmp_buf env;

void function2() {
    longjmp(env, 1);
}

void function1() {
    function2();
}

int main() {
    int ret = setjmp(env);
    
    if (ret == 0) {
        function1();
        printf("Long jump not performed\n");
    } else {
        printf("Long jump performed\n");
    }
    
    return 0;
}
