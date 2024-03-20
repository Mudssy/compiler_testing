
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void async_event(int sig) {
    printf("Async event fired!\n");
}

int main() {
    struct sigaction sa;
    sa.sa_handler = &async_event;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = SA_ASYNC;
    
    if (sigaction(SIGUSR1, &sa, NULL) == -1) {
        perror("Could not set signal handler");
        return 1;
    }
    
    printf("Firing async event...\n");
    raise(SIGUSR1);
    
    sleep(2); // Sleep for a while to give the asynchronous event a chance to print.
    
    return 0;
}
