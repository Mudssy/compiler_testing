
#include <stdio.h>

void print_message(const char* message) {
    printf("Message: %s\n", message); // There is no need to check if "message" is null here, because the function signature specifies that it will never be NULL
}

int main() {
    const char* msg = "Hello, world!";
    print_message(msg);
    return 0;
}
