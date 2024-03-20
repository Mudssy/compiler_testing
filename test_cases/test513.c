
#include <pthread.h>
#include <stdio.h>
#include <assert.h>

int Global;

void *Thread1(void* x) {
    Global++;
    return NULL;
}

int main() {
    pthread_t t;
    pthread_create(&t, NULL, Thread1, NULL);
    Global--;
    pthread_join(t, NULL);

    // If Thread Sanitizer is enabled, it should detect a data race on Global.
    assert(Global == 0);
    printf("If this line is printed, TSAN did not detect a race!\n");

    return 0;
}
