
#include <stdio.h>
#include <pthread.h>

_Thread_local int tlsVar = 10; // Thread Local Storage variable declaration 

void* threadFunc(void* arg) {
    printf("Before modification in thread : %d\n", tlsVar);
    tlsVar = *((int*)arg); // Modifying TLS variable
    printf("After modification in thread: %d\n", tlsVar); 
    
    return NULL;
}

int main() {
    pthread_t threadId1, threadId2;
    int var = 50; // Variable for first thread
    int var2 = 60; // Variable for second thread

    // Create two threads 
    pthread_create(&threadId1, NULL, &threadFunc, (void*)&var);
    pthread_create(&threadId2, NULL, &threadFunc, (void*)&var2);
    
    // Wait until both threads have completed execution
    pthread_join(threadId1, NULL); 
    pthread_join(threadId2, NULL); 

    return 0;
}
