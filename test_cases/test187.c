
#include <stdio.h>
#include <pthread.h>

// Thread-local storage declaration
__thread int threadLocalVar;

void *ThreadFunction(void *arg) {
    // Set the value of this thread's copy of threadLocalVar
    threadLocalVar = *((int*)arg);
    
    printf("threadLocalVar in thread %ld before sleep: %d\n", pthread_self(), threadLocalVar);
    
    // Sleep for a while to give other threads a chance to run and potentially modify the value
    struct timespec delay;
    delay.tv_sec = 0;
    delay.tv_nsec = 100000000;  // 100ms
    nanosleep(&delay, NULL);
    
    printf("threadLocalVar in thread %ld after sleep: %d\n", pthread_self(), threadLocalVar);
    
    return NULL;
}

int main(void) {
    pthread_t threads[2];
    int args[2] = {1, 2};
    
    // Create two threads
    for (size_t i = 0; i < 2; ++i) {
        pthread_create(&threads[i], NULL, ThreadFunction, &args[i]);
    }
    
    // Wait for both threads to finish
    for (size_t i = 0; i < 2; ++i) {
        pthread_join(threads[i], NULL);
    }
    
    return 0;
}
