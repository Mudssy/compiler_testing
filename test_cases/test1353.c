
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t childPid;
    int status;
    
    childPid = fork();
    
    if (childPid >= 0) // fork was successful 
    {
        if (childPid == 0) // in child process
        {
            char *args[]={"echo", "Child Process Running", NULL};
            execve("/bin/echo", args, NULL);
        }
        else // in parent process
        {
            waitpid(childPid, &status, 0); // waiting for child to finish executing.
            
            if (WIFEXITED(status))
                printf("Child exited with code: %d\n", WEXITSTATUS(status));
            else
                printf("Child terminated abnormally.\n");
        }
    }
    else // fork failed; 
    {
        perror("fork");
        _exit(-1);
    }
    
    exit(0);
}
