
#include <stdio.h>
#include <setjmp.h>

static jmp_buf jumpbuffer;

void function2(int value) {
    longjmp(jumpbuffer, 1); /* Jump back to the setjmp. */
}

void function1() {
    if (!setjmp(jumpbuffer)) { /* Set a jump point using setjmp. */
        printf("Calling function2\n");
        function2(456); /* Calling function2 causes the setjmp to return 1. */
    } else {
        printf("Jumped back from function2\n");
    }
}

int main() {
    function1();
    return 0; /* Return instead of running forever. */
}
