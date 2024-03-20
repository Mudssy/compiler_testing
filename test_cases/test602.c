
#include <stdio.h>

void print_message(char *msg) {
    printf("Message: %s\n", msg);
}

int main() {
    // Testing default arguments
    print_message("Hello");  // Should print "Message: Hello"
    return 0;
}