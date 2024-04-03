
#include <stdio.h>

int main() {
    char str[] = "This is a test string";
    char *ptr;
    
    printf("Tokens:\n");

    ptr = strtok(str, " ");

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }

    return 0;
}
