
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

// Function to be executed by the thread. 
void* print_id(void* vargp) {
    int id = *((int*)vargp);
    printf("Hello from thread %d\n", id);
    sleep(1); // Make sure this program does not run forever.
    return NULL;
} 
  
int main() {
    pthread_t tid[5]; // Thread IDs
    
    for (int i = 0; i < 5; i++) {
        printf("Creating thread %d\n", i);
        
        int* arg = malloc(sizeof(*arg));
        *arg = i;
        
        // Create a new thread. The new thread will run the function 'print_id'. 
        pthread_create(&tid[i], NULL, print_id, arg);
    }
    
    for (int i = 0; i < 5; i++) {
       // Wait for all threads to finish. 
       pthread_join(tid[i], NULL);
    }
  
    return 0;
}
