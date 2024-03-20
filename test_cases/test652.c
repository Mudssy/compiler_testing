
#include <signal.h>
#include <stdio.h>

void signal_handler(int signum) {
    printf("Received signal: %d\n", signum);
}

int main() {
    // set up the signal handler
    signal(SIGINT, signal_handler);
    
    printf("Waiting for a SIGINT...\n");
    
    while (1) {} // keep running to prevent the program from exiting
    return 0;
}
