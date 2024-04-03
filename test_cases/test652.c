
#include <signal.h>
#include <stdio.h>
#include <unistd.h> // For pause() function

void signal_handler(int signum) {
    printf("Received signal: %d\n", signum);
}

int main() {
    struct sigaction sa;
    
    // Initialize sigaction structure to default values
    memset(&sa, 0, sizeof(sa));
    
    // Set up the handler for SIGINT signal (Ctrl+C)
    sa.sa_handler = &signal_handler;
    
    if (sigaction(SIGINT, &sa, NULL) != 0) {
        perror("Error: unable to set signal handler");
        return 1; // Or any other error code
    }
    
    printf("Waiting for a signal...\n");
    
    // Wait until a signal arrives
    pause();
    
    printf("Signal received!\n");
    
    return 0;
}
