
#include <stdio.h>
#include <signal.h>

void signal_handler(int signum) {
    printf("Received signal %d\n", signum);
}

int main() {
    // Registering the signal handler for SIGINT (interrupt from keyboard)
    if(signal(SIGINT, signal_handler) == SIG_ERR) {
        printf("Unable to register signal handler\n");
        return 1;   // Return a non-zero value indicates an error
    }
    
    // Raise the interrupt signal (Ctrl+C on most systems)
    raise(SIGINT);
    
    return 0;   // Indicates success
}
