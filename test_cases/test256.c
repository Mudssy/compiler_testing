
#include <stdio.h>

void print_message([[unused]] int dummy) {
    printf("This is a test message.\n");
}

int main() {
    print_message(0);
    return 0;
}
