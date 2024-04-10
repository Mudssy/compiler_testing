
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void signal_handler(int signum) {
    printf("Signal received!\n");
}

int main() {
    if (signal(SIGUSR1, signal_handler) == SIG_ERR) {
        perror("Failed to catch SIGUSR1\n");
        return 1;
    }
    
    printf("Waiting for a signal...\n");
    pause();
    return 0;
}
