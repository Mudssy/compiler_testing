
#include <stdio.h>
#include <pthread.h>

int count = 0;
pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;

void *incr(void *arg) {
    for (int i = 0; i < 10; i++){ 
        pthread_mutex_lock(&m); //lock mutex before write operation.
        count++; 
        pthread_mutex_unlock(&m); //unlock mutex after write operation.
    }
    return NULL;
}

int main() {
    pthread_t thread[10];
    
    for (int i = 0; i < 10; i++) 
        pthread_create(&thread[i], NULL, incr, NULL); //creating threads.
        
    for (int i = 0; i < 10; i++) 
        pthread_join(thread[i], NULL); //joining threads to main thread.
    
    printf("Count: %d\n", count); // Expected output is "Count: 10"
    
    return 0;
}
