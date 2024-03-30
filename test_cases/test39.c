
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void sigalrm_handler(int signum) {
    printf("Signal SIGALRM received, exiting...\n");
    _exit(0);
}

int main() {
    signal(SIGALRM, sigalrm_handler);
    alarm(1);  // Set up a timer for 1 second.

    while (1) {}  // Infinite loop to keep the program running until the signal is handled.

    return 0;
}
