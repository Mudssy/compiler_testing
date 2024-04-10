
#include <stdio.h>
#include <stdlib.h>  // For getenv function

int main() {
    printf("Hello World!\n");
    
    char* env_var = getenv("PATH");  // Access an environment variable
    if(env_var != NULL) {
        printf("Value of PATH: %s\n", env_var);
    } else {
        printf("Environment variable PATH not found!\n");
    }
    
    return 0;
}
