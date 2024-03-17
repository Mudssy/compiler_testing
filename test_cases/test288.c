
#include <pthread.h>
#include <stdio.h>

void* thread_function(void* arg) {
    printf("Inside the thread\n");
    return NULL;
}

int main() {
    pthread_t thread_id;
    int result = pthread_create(&thread_id, NULL, &thread_function, NULL);
    
    if (result != 0) {
        printf("Thread creation failed\n");
        return 1;
    }
    
    result = pthread_join(thread_id, NULL);
    
    if (result != 0) {
        printf("Failed to join thread\n");
        return 1;
    }
    
    printf("Thread joined successfully\n");
    return 0;
}
