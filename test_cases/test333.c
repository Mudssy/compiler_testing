
#include <pthread.h>
#include <stdio.h>

pthread_mutex_t mutex;
int sharedVariable = 0;

void* threadFunction(void* arg) {
    pthread_mutex_lock(&mutex);
    ++sharedVariable;
    printf("Shared variable value after increment: %d\n", sharedVariable);
    pthread_mutex_unlock(&mutex);
}

int main() {
    if (pthread_mutex_init(&mutex, NULL) != 0) {
        printf("Mutex initialization failed!\n");
        return 1;
    }

    pthread_t threadID[3];
    int i;
    
    for(i = 0; i < 3; ++i) {
        if (pthread_create(&threadID[i], NULL, &threadFunction, NULL) != 0) {
            printf("Failed to create thread!\n");
            return 1;
        }
    }
    
    for(i = 0; i < 3; ++i) {
        pthread_join(threadID[i], NULL);
    }
    
    printf("Final value of shared variable: %d\n", sharedVariable);
    
    pthread_mutex_destroy(&mutex);
    return 0;
}
