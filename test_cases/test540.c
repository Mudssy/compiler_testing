
#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;

void error_handler(int status) {
    printf("Error: %d\n", status);
    longjmp(buf, 1); // jump back to the setjmp call after setting the context
}

int main() {
    if (!setjmp(buf)) {
        printf("Calling error_handler with status 2\n");
        error_handler(2);   // does not return here
    } else {
        printf("Continued from setjmp call\n");
    }
    return 0;
}
