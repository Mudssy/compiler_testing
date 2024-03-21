
#include <stdio.h>
_Noreturn void func(void) {
    printf("This function never returns! Exit program!\n");
}

int main() {
    printf("Starting the main function\n");
    func();
    printf("The control will never reach here because 'func' does not return.\n");
    return 0;
}
