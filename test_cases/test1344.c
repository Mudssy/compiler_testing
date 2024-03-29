
#include <stdio.h>
#include <stdlib.h>

int main() {
    char* env_name = "MY_ENV";
    char* env_value = "Hello World";
    int result;

    // Set the environment variable.
    result = setenv(env_name, env_value, 1);
    
    if (result != 0) {
        printf("Failed to set environment variable\n");
        return EXIT_FAILURE;
    }

    // Get the environment variable.
    char* value = getenv(env_name);
    
    if (value == NULL) {
        printf("Failed to get environment variable\n");
        return EXIT_FAILURE;
    }

    printf("%s=%s\n", env_name, value);

    return EXIT_SUCCESS;
}
