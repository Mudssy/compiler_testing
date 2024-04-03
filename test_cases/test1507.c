
#include <stdio.h>
#include <threads.h>

_Thread_local int x = 10; // This will be a thread-local variable

void printX(int value) {
    printf("Value of x is %d\n", value);
}

int run(void *arg) {
    (void) arg; // Unused
    printX(x++);
    return 0; // Returning from the thread
}

int main() {
    thrd_t thr[2];

    if (thrd_create(&thr[0], run, NULL) != thrd_success ||
        thrd_create(&thr[1], run, NULL) != thrd_success) {
        fprintf(stderr, "Error creating thread\n");
        return 1; // Returning from the main function
    }

    if (thrd_join(thr[0], NULL) != thrd_success ||
        thrd_join(thr[1], NULL) != thrd_success) {
        fprintf(stderr, "Error joining thread\n");
        return 2; // Returning from the main function
    }

    return 0;
}
