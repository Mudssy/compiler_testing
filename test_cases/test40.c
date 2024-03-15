
#include <stdio.h>
#include <stdlib.h>

__thread int thread_local_var = 10;

int main() {
    printf("Initial value of thread-local variable: %d\n", thread_local_var);
    thread_local_var += 5;
    printf("After modification, value of thread-local variable: %d\n", thread_local_var);
    return 0;
}
