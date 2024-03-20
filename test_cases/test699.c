
#include <stdio.h>
#include <setjmp.h>

static jmp_buf buf;

void second(int arg) {
    printf("second called with %d\n", arg);
    longjmp(buf, 42); // Jump back to where setjmp was called - making setjmp now return 42.
}

void first() {
    int x = setjmp(buf);

    if (x) { // This is a non-local goto, i.e., we jumped here from somewhere else using longjmp
        printf("first called again with %d\n", x);
        return;
    }

    second(1); // Calling second will cause this function to jump back here via setjmp, so the below printf will not be executed
    
    printf("This line should never be printed because we jumped back from second!\n");
}

int main() {
    first();
    return 0;
}
