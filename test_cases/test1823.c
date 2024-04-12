
#include <stdio.h>
#include <pthread.h>

void* thread_func(void *arg) {
    printf("Hello from another thread!\n");
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    
    if (pthread_create(&thread1, NULL, &thread_func, NULL)) {
        fprintf(stderr, "Error creating thread\n");
        return 1;
    }

    if (pthread_create(&thread2, NULL, &thread_func, NULL)) {
        fprintf(stderr, "Error creating thread\n");
        return 1;
    }
    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    printf("Done!\n");
    return 0;
}
