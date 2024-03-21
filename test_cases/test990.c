
#include <stdio.h>
#include <pthread.h>

void* print_message(void *ptr) {
    char *message;
    message = (char *) ptr;
    printf("%s \n", message);
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    const char *message1 = "Hello from thread 1";
    const char *message2 = "Hello from thread 2";
    
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
    
    printf("Waiting for threads to finish...\n");
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("Threads finished.\n");
    
    return 0;
}
