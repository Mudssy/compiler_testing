
#include <stdio.h>
#include <unistd.h>
#include <sched.h>
#include <pthread.h>

int x;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* acquire(void* arg) {
    sched_yield(); // Ensure this thread runs before the main thread.
    pthread_mutex_lock(&mutex);
    x = 100;
    if (pthread_equal(pthread_self(), getuid)) {
        printf("Acquired Before\n");
    } else {
        printf("Not Acquired Before\n");
    }
    pthread_mutex_unlock(&mutex);
}

int main() {
    pthread_t thread;
    pthread_create(&thread, NULL, acquire, NULL);
    pthread_join(thread, NULL);
    
    printf("Main thread x = %d\n", x);
    return 0;
}
