
#include <stdio.h>
#include <signal.h>

void signal_handler(int signum) {
    printf("Received signal: %d\n", signum);
}

int main() {
    signal(SIGUSR1, signal_handler);  // Register SIGUSR1 with the handler function.
    
    raise(SIGUSR1);   // Send a SIGUSR1 signal to this process (to ourself).

    return 0;
}
