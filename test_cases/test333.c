
#include <pthread.h>
#include <stdio.h>

int globalVar = 0; // Global variable to be accessed by threads

void* increment(void* arg) {
    (void)arg; // Suppress warning about unused parameter
    for(int i = 0; i < 1000000; ++i) {
        __sync_fetch_and_add(&globalVar, 1); // Atomic operation
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    int ret = 0;

    ret = pthread_create(&thread1, NULL, increment, NULL);
    if (ret != 0) {
        printf("Error creating thread 1\n");
        return 1;
    }
    
    ret = pthread_create(&thread2, NULL, increment, NULL);
    if (ret != 0) {
        printf("Error creating thread 2\n");
        return 1;
    }

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    printf("Final value of globalVar: %d\n", globalVar);

    return 0;
}
