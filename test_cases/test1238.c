
#include <stdio.h>
#include <stdlib.h>

int main() {
    char* env_var = getenv("PATH"); // replace "PATH" with the environment variable you want to test
    
    if (env_var != NULL) {
        printf("The environment variable exists and its value is: %s\n", env_var);
    } else {
        printf("The environment variable does not exist.\n");
    }

    return 0; // This ensures the program returns successfully.
}
