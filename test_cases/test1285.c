
#include <stdio.h>
#include <setjmp.h>

static jmp_buf env;

void second(int count) {
    longjmp(env, 2);           /* jump back to where setjmp was called - making setjmp now return 2 */
}

void first(int count) {
    if (count > 5) longjmp(env, 1); //longjmp jumps to the place of setjmp
    second(count+1);
}

int main() {
    volatile int x = 0; /* change this to a local variable or the optimizer might remove the recursive calls */
    switch (setjmp(env)) {
        case 0:
            x=5;
            first(--x);
            break;
        case 1:
            printf("Error\n");
            break;
        case 2:
            printf("Hello\n");
            break;
    }
    return 0;
}
