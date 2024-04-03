
#include <stdio.h>
#include <pthread.h>

// Global variable
int global = 10;

// Thread local variable
_Thread_local int threadLocalVariable = 10;

void *threadFunction(void* arg) {
    printf("Inside thread function - Global: %d, Local Variable: %d\n", global++, threadLocalVariable++);
}

int main() {
    
    // Create two threads
    pthread_t thread1;
    pthread_create(&thread1, NULL, &threadFunction, NULL);

    pthread_t thread2;
    pthread_create(&thread2, NULL, &threadFunction, NULL);

    printf("Inside main function - Global: %d\n", global++);
    
    // Join both threads to wait them
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
