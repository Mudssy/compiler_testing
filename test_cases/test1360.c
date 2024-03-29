
#include <stdio.h>
#include <pthread.h>

pthread_mutex_t lock;

void* routine(void* arg) {
    pthread_mutex_lock(&lock);
    printf("Lock acquired by thread %d\n", *((int*)arg));
    sleep(1); // Sleep to ensure another thread gets the lock
    pthread_mutex_unlock(&lock);
}

int main() {
    int id1 = 1, id2 = 2;
    pthread_t tid1, tid2;

    if (pthread_mutex_init(&lock, NULL) != 0) {
        printf("Mutex initialization failed.\n");
        return 1;
    }

    // Create two threads to test locking and unlocking
    pthread_create(&tid1, NULL, &routine, &id1);
    sleep(2); // Sleep to ensure that the second thread gets the lock first
    pthread_create(&tid2, NULL, &routine, &id2);

    // Wait for both threads to finish
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    // Destroy the mutex
    pthread_mutex_destroy(&lock);

    return 0;
}
