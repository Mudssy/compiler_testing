
#include <stdio.h>
#include <signal.h>

void handle_sigfpe(int signum) {
    printf("Caught SIGFPE: Arithmetic Exception\n");
}

int main() {
    signal(SIGFPE, handle_sigfpe);

    int x = 0;
    int y = 1 / x; // This will cause a division by zero error (arithmetic exception)

    printf("Result: %d\n", y);
    
    return 0;
}
