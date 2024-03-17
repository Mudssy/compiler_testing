
#include <stdio.h>

void print_message() {
    #pragma message("This is a message from the pragma directive.")
}

int main(void) {
    print_message();
    return 0;
}
