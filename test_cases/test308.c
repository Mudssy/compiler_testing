
#include <stdio.h>
#include <pthread.h>

void* print_message(void* ptr);

int main() {
    // Define three threads
    pthread_t thread1, thread2, thread3;
    
    char *msg1 = "Thread 1";
    char *msg2 = "Thread 2";
    char *msg3 = "Thread 3";

    int i1, i2, i3;

    // Create two threads and pass message to print as argument
    i1 = pthread_create(&thread1, NULL, print_message, (void*) msg1);
    i2 = pthread_create(&thread2, NULL, print_message, (void*) msg2);
    i3 = pthread_create(&thread3, NULL, print_message, (void*) msg3);
    
    // Make sure threads have ended before program ends
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL); 

    return 0;
}

void* print_message(void* ptr) {
    char *msg;
    msg = (char*) ptr; // cast from void pointer to character string

    printf("%s \n", msg);
    
    return NULL;
}
