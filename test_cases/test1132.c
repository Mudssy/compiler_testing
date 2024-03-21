
#include <stdio.h>
#define THREAD_LOCAL _Thread_local
THREAD_LOCAL int x = 10;
int main() {
    printf("Testing %s\n", "Thread Local Storage Class Specifier");
    printf("Initial value: %d\n", x);
    // Change the value of x
    x = 20;
    printf("Changed value: %d\n", x);
    return 0;
}
