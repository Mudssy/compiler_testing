
#include <stdio.h>

__attribute__((noreturn)) void exit_function(void);

int main() {
    printf("This program will call a function with noreturn attribute.\n");
    exit_function();
    printf("You should not see this message, since the function is marked as noreturn.\n");
    return 0;
}

__attribute__((noreturn)) void exit_function(void) {
    printf("This function has been called and will now exit.\n");
    exit(0);
}
