
#include <stdio.h>
#include <signal.h>

volatile sig_atomic_t flag = 0;

void handler(int signum) {
    printf("Signal Handled\n");
    flag = 1;
}

int main() {
    struct sigaction action;
    memset(&action, 0, sizeof(struct sigaction));
    action.sa_handler = &handler;
    sigaction(SIGINT, &action, NULL);

    while(!flag) {}

    printf("Test Complete\n");

    return 0;
}
