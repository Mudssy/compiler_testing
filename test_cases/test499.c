
#include <pthread.h>
#include <stdio.h>

// Global variable for testing
int global_var __attribute__((pt_guarded_by(lock))) = 0;

// Mutex lock
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void *increment_var(void *arg) {
    pthread_mutex_lock(&lock);
    ++global_var;
    pthread_mutex_unlock(&lock);

    return NULL;
}

int main() {
    // Create threads to increment the variable
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, &increment_var, NULL);
    pthread_create(&thread2, NULL, &increment_var, NULL);

    // Wait for threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Global variable value: %d\n", global_var);

    return 0;
}
