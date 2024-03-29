
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        printf("You provided this argument: %s\n", argv[1]);
    } else {
        const char* env_var = getenv("MY_ENV_VAR");
        if (env_var != NULL) {
            printf("The value of MY_ENV_VAR is: %s\n", env_var);
        } else {
            printf("No argument or environment variable provided.\n");
        }
    }
    
    return 0;
}
