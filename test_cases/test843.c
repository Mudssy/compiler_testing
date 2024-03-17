
#include <stdio.h>
#include <pthread.h>

__thread int tls_var = 10;

void *thread_func(void *arg) {
    printf("Thread TLS value: %d\n", tls_var);
    return NULL;
}

int main() {
    pthread_t thread;

    if (pthread_create(&thread, NULL, &thread_func, NULL)) {
        fprintf(stderr, "Error creating thread\n");
        return 1;
    }

    tls_var = 20;
    printf("Main TLS value: %d\n", tls_var);

    if (pthread_join(thread, NULL)) {
        fprintf(stderr, "Error joining thread\n");
        return 1;
    }

    return 0;
}
