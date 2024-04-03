
#include <stdio.h>

void noreturn_test(void) __attribute__((noreturn));
const int const_test = 1;

int main() {
    printf("Testing 'noreturn' attribute\n");
    noreturn_test();  // this line will never return, because of the attribute.
    printf("This line will not be printed.\n");
    return 0;
}

void noreturn_test(void) {
    printf("Inside 'noreturn' function\n");
}
