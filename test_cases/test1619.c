
#include <setjmp.h>
#include <stdio.h>

static jmp_buf jumpbuffer;

void catch(int val) {
    printf("Caught %d!\n", val);
    longjmp(jumpbuffer, 1);
}

int main() {
    volatile int x = 0; // volatile to ensure no optimizations are made
    switch (setjmp(jumpbuffer)) {
        case 0: // initial setjmp, simulate an exception by throwing a value of 27
            printf("Before the throw!\n");
            catch(27);
            break;
        case 1: // longjmp has been called somewhere else
            printf("After the throw!\n");
            break;
    }
    return x;
}
