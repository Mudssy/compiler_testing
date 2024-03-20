
#include <stdio.h>
#include <setjmp.h>

void function2(int count);

jmp_buf buf;

void function1() {
    printf("Before setjmp\n");
    if (setjmp(buf) == 0){
        printf("First time through\n");
        function2(1); /* Never returns */
    } else {
        printf("After longjmp\n");
    }
}

void function2(int count) {
    if (count < 10)
        longjmp(buf, 1);
}

int main() {
    function1();
    return 0;
}
