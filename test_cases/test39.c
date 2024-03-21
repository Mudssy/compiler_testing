
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void signal_handler(int signum) {
    printf("Received signal %d\n", signum);
}

void async_event() {
    printf("Async event triggered\n");
}

int main() {
    struct sigaction sa;
    sa.sa_handler = &signal_handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;  // no flag set
    sigaction(SIGINT, &sa, NULL);  // register signal handler
    
    printf("Starting program\n");
    
    while (1) {
        sleep(5);  // simulate async event
        async_event();
    }
}
