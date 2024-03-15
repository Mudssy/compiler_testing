
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int signum) {
    printf("Caught signal: %d\n", signum);
}

int main() {
    if (signal(SIGINT, handler) == SIG_ERR) {
        perror("Error during signal registration");
        return 1;
    }

    while (1) {
        printf("Waiting for a signal...\n");
        sleep(5);
    }

    return 0;
}
