
#include <stdio.h>
#include <pthread.h>

#define ITERATIONS 1000000

// This variable will be shared across threads
__attribute__((tls_model("global-dynamic"))) __thread int global = 0;

void *increment(void *arg){
    for (int i=0; i<ITERATIONS; ++i){
        // The following operation is not atomic and might lead to race condition
        ++global; 
    }
    return NULL;
}

int main(){
    pthread_t thread1, thread2;
    int ret;

    ret = pthread_create(&thread1, NULL, increment, NULL);
    if (ret){
        printf("Thread creation failed: %d\n", ret);
        return 1;
    }

    ret = pthread_create(&thread2, NULL, increment, NULL);
    if (ret){
        printf("Thread creation failed: %d\n", ret);
        return 1;
    }

    // Wait for the threads to complete their execution
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Final value of global: %d (Expected %d)\n", global, ITERATIONS*2);
}
