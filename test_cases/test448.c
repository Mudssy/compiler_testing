
#include <stdio.h>
#include <stdnoreturn.h>

void _Nonnull check_null(char *str) {
    if (str == NULL) {
        perror("Error: Null pointer passed.");
        exit(EXIT_FAILURE);
    }
}

int main() {
    char *ptr = "Hello, World!";
    check_null(ptr);
    printf("%s\n", ptr);
    return 0;
}
