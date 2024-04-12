
#include <stdio.h>
#include <pthread.h>

void* print_message(void *ptr) {
    char *message;
    message = (char *) ptr;
    printf("%s \n", message);
    
    // Exit the thread when done, this will terminate the thread immediately and not run forever
    pthread_exit(NULL);
}

int main() {
    pthread_t thread1, thread2;
    char *message1 = "Thread 1";
    char *message2 = "Thread 2";
    
    int iret1, iret2;

    /* Create independent threads each of which will execute function */
    iret1 = pthread_create(&thread1, NULL, print_message, (void*) message1);
    if(iret1) {
        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret1);
        exit(EXIT_FAILURE);
    }

    iret2 = pthread_create(&thread2, NULL, print_message, (void*) message2);
    if(iret2) {
        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret2);
        exit(EXIT_FAILURE);
    }
    
    // Wait till threads are complete before main continues, unless we're in a loop or something that repeats
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    return 0;
}
