
#include <stdio.h>

typedef enum { Outer_Inner } Namespace;
char *message = "World";

int main() {
    printf("Hello, %s!\n", message);
    return 0;
}
