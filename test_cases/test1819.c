
#include <stdio.h>
#include <unistd.h>  // For fork(), getpid()

int main(void) {
    for (int i = 0; i < 100000; ++i) {  // Creates a large number of processes
        if (fork() == 0) {  // If this is the child process, print and exit
            printf("Child Process: %d\n", getpid());
            return 0;
        }
    }
}
