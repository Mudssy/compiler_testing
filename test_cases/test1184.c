
#include <stdio.h>

int main() {
    char buffer[10];
    int ret = snprintf(buffer, sizeof(buffer), "%s", "Hello");
    
    // Check if the string was successfully written to buffer
    if (ret < 0 || ret >= sizeof(buffer)) {
        printf("Failure\n");
        return 0;
    }

    // Print out the string stored in buffer
    printf("%s\n", buffer);
    
    // Check if the string is correct
    if (strcmp(buffer, "Hello") != 0) {
        printf("Failure\n");
    } else {
        printf("Success\n");
    }

    return 0;
}
