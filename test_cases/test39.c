
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

volatile sig_atomic_t signal_received = 0;

void sigint_handler(int signum) {
    printf("Caught SIGINT, exiting...\n");
    signal_received = 1;
}

int main() {
    signal(SIGINT, sigint_handler);
    
    while (!signal_received) {
        printf("Still running... Press Ctrl+C to interrupt.\n");
        sleep(1);
    }
    
    return 0;
}
