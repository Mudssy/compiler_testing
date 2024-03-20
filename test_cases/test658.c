
#include <stdio.h>

// Global variable
int global = 10;

// Thread local variable
_Thread_local int threadLocalVariable = 10;

void *threadFunction(void* arg) {
    printf("Inside thread function - Global: %d, Local Variable: %d\n", global++, threadLocalVariable++);
}

int main() {
    
    // Create two threads
    pthread_t tid1, tid2;
    pthread_create(&tid1, NULL, threadFunction, NULL);
    pthread_create(&tid2, NULL, threadFunction, NULL);

    // Join the threads
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    
    return 0;
}
