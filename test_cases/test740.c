
#include <stdio.h>

void noreturn_function() __attribute__((noreturn));

int main(void) {
    try {
        noreturn_function();
        printf("Failed to stop the program\n");
    } catch (...) {
        printf("Successfully stopped the program\n");
    }
}

void noreturn_function() {
    throw 1;
}
