
#include <stdio.h>

_Thread_local int testVar = 10;

void *threadFunc(void* arg) {
    printf("Value in thread local is %d\n", testVar);
    return NULL;
}

int main() {
    printf("Main function value is %d\n", testVar);
    
    // Create a new thread and run it
    pthread_t threadID;
    int result = pthread_create(&threadID, NULL, &threadFunc, NULL);
    if (result != 0) {
        printf("Failed to create thread.\n");
        return 1; // Exit with error status.
    }
    
    // Wait for the thread to finish
    pthread_join(threadID, NULL);

    return 0; // Exit without error.
}
