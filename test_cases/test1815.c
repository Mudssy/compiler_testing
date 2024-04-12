
#include <stdio.h>
#include <unistd.h>

int main() {
    char *args[] = {"ls", "-l", NULL}; // Replace with your command and arguments
    
    if (fork() == 0) { 
        execvp(args[0], args); // This could be Command Injection point
    } else {
        printf("Parent process\n");
    }
  
    return 0; // This should always return
}
