
#include <stdio.h>
#include <signal.h>
#include <setjmp.h>

static jmp_buf jumpBuffer;

void signalHandler(int signum) {
    printf("Handling signal %d\n", signum);
    longjmp(jumpBuffer, 1); // Return from the setjmp call in main
}

int main() {
    struct sigaction action;
    action.sa_handler = signalHandler;
    action.sa_flags = 0;
    sigemptyset(&action.sa_mask);
    sigaction(SIGFPE, &action, NULL); // Set up the handler for SIGFPE

    if (setjmp(jumpBuffer) == 0) {
        int x = 10 / 0; // This will cause a floating point exception
        printf("After division by zero\n");
    } else {
        printf("Recovered from SIGFPE\n");
    }
    return 0;
}
