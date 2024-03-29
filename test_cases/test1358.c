
#include <stdio.h>
#include <pthread.h>

void* print_message(void *ptr) {
    char *message;
    message = (char *) ptr;
    printf("%s \n", message);
}

int main() {
    pthread_t thread1, thread2;
    char *message1 = "Thread 1";
    char *message2 = "Thread 2";

    int iret1 = pthread_create(&thread1, NULL, print_message, (void*) message1);
    if(iret1) {
        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret1);
        return 0;
    }
    
    int iret2 = pthread_create(&thread2, NULL, print_message, (void*) message2);
    if(iret2) {
        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret2);
        return 0;
    }
    
    printf("pthread_create() for thread 1 returns: %d\n",iret1);
    printf("pthread_create() for thread 2 returns: %d\n",iret2);
    
    /* Wait till threads are complete before main continues. */
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
