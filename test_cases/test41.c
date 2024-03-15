
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* print_message(void *ptr);

int main() {
    pthread_t thread1, thread2;
    const char *message1 = "Thread 1";
    const char *message2 = "Thread 2";
    int ret1, ret2;

    ret1 = pthread_create(&thread1, NULL, print_message, (void*) message1);
    ret2 = pthread_create(&thread2, NULL, print_message, (void*) message2);

    if (ret1 || ret2) {
        fprintf(stderr, "Error - pthread_create() return code: %d\n", (ret1 != 0 ? ret1 : ret2));
        exit(-1);
    }

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Thread 1 and Thread 2 have completed.\n");

    return 0;
}

void* print_message(void *ptr) {
    char *msg = (char *) ptr;
    printf("%s\n", msg);
    pthread_exit(NULL);
}
