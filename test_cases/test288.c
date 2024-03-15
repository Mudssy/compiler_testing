
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *race_condition(void *arg) {
    static int shared = 0;

    shared++;
    printf("Incremented shared variable to: %d\n", shared);

    return NULL;
}

int main() {
    pthread_t threads[2];

    for (size_t i = 0; i < sizeof(threads) / sizeof(pthread_t); i++) {
        if (pthread_create(&threads[i], NULL, race_condition, NULL)) {
            fprintf(stderr, "Error creating thread\n");
            return 1;
        }
    }

    for (size_t i = 0; i < sizeof(threads) / sizeof(pthread_t); i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
