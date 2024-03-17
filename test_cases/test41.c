
#include <stdio.h>
#include <pthread.h>

void* print_id(void *vargp) {
    int id = *((int *) vargp);
    printf("Thread ID: %d\n", id);
}

int main() {
    pthread_t thread1, thread2;
    int id1 = 1, id2 = 2;
    
    pthread_create(&thread1, NULL, print_id, &id1);
    pthread_create(&thread2, NULL, print_id, &id2);
    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
  
    return 0;
}
