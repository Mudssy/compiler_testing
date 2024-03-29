
#include <stdio.h>

int main() {
    char *error_message = "A test error occurred!";
    
    fprintf(stderr, "%s\n", error_message);
    perror("Test Error");
    return 0;
}
