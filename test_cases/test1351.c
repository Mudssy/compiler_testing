
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> 
#include <sys/wait.h>

int main(void) {
    pid_t pid, childPid;
    int status;
    
    if ((pid = fork()) < 0) { /* Error occurred */
        perror("fork");
        return 1;
    } else if (pid == 0) {   /* Child process */
        printf("Child Process\n");
        _exit(0);             /* Terminate child process */
    } else {                   /* Parent process */
        do {                    /* Wait for child to terminate */
            childPid = waitpid(pid, &status, WUNTRACED | WCONTINUED);
            if (childPid == -1) {
                perror("waitpid");
                return 1;
            } else if (WIFEXITED(status)) {
                printf("Parent Process\n");
            }
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
    
    return 0;
}
