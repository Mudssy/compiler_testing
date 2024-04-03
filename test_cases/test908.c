
#include <stdio.h>
#include <pthread.h>

pthread_mutex_t lock;

void* thread_func(void* arg) {
    // Your code here...
    return NULL;
}

int main() {
    pthread_t tid1, tid2;
    
    pthread_mutex_init(&lock, NULL);  // Initialize the mutex

    int err = pthread_create(&tid1, NULL, thread_func, NULL);   // Create new threads
    if (err != 0) {
        printf("Can't create thread :[%s]", strerror(err));
    }
    
    err = pthread_create(&tid2, NULL, thread_func, NULL);  // Create second thread
    if (err != 0) {
        printf("Can't create thread :[%s]", strerror(err));
    }

    pthread_join(tid1, NULL);   // Wait for the threads to finish
    pthread_join(tid2, NULL); 
    
    pthread_mutex_destroy(&lock);  // Destroy mutex after all threads are done

    return 0;
}
