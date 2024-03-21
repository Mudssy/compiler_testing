
#include <stdio.h>
#include <pthread.h>

int shared_var = 0;  // shared variable
pthread_mutex_t lock;  // mutex lock

void* thread_func(void *arg) {
    pthread_mutex_lock(&lock);
    int local = shared_var + 1;
    printf("Shared var: %d\n", shared_var);
    sleep(5);  // This is to ensure that the function does not run forever.
    shared_var = local;
    pthread_mutex_unlock(&lock);
    return NULL;
}

int main() {
    if (pthread_mutex_init(&lock, NULL) != 0) {
        printf("Mutex initialization failed.\n");
        return 1;
    }
    
    pthread_t tid1, tid2;
    int ret1 = pthread_create(&tid1, NULL, thread_func, NULL);
    int ret2 = pthread_create(&tid2, NULL, thread_func, NULL);

    if (ret1 != 0) {
        printf("Thread creation failed.\n");
        return 1;
    }

    if (ret2 != 0) {
        printf("Thread creation failed.\n");
        return 1;
    }

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    
    pthread_mutex_destroy(&lock);

    return 0;
}
