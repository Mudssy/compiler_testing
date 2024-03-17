
#include <stdio.h>

__attribute__((destructor)) void on_exit(void) {
    printf("Destructor attribute feature supported.\n");
}

int main() {
    printf("Program started.\n");
    return 0;
}
