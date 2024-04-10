
#include <stdio.h>
#include <signal.h>
#include <unistd.h>   // For sleep function

void handle_sigint(int signum) {
    printf("Received signal %d\n", signum);
}

int main() {
    struct sigaction sa;
    
    sa.sa_handler = &handle_sigint;
    // Clear the flags argument
    sa.sa_flags = 0; 

    // Registering SIGINT with our handler
    if (sigaction(SIGINT, &sa, NULL) != 0) {
        printf("Could not register signal\n");
        return -1;
    }
    
    while(1){
        printf("Running...\n");
        sleep(1);  // Sleeps for one second.
    }
}
