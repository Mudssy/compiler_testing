
#include <stdio.h>
#include <signal.h>

void handler(int signum) {
    printf("Signal %d is received\n", signum);
}

int main() {
    signal(SIGINT, handler); // Register the handler for SIGINT (Ctrl+C)
    
    printf("Try to stop the program by pressing Ctrl+C...\n");

    while(1) {} // Infinite loop to keep the program running

    return 0; // This line will never be reached as the above while loop is infinite
}
