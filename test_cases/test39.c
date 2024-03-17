
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

// Signal handler function
void handle_sigint(int signum) {
    printf("Received SIGINT signal!\n");
    // Cleanup code here (if any)...
}

int main() {
    // Set the SIGINT handler
    signal(SIGINT, handle_sigint);
    
    printf("Waiting for 10 seconds before exiting. Press Ctrl+C to interrupt me.\n");
    sleep(10);
    printf("Finished waiting. Exiting...\n");
    
    return 0;
}
