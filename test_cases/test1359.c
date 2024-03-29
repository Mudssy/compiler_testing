
#include <stdio.h>
#include <pthread.h>

void* print_message(void *ptr) {
    printf("Hello from the new thread!\n");
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    int  iret1, iret2;
    
    /* Create independent threads each of which will execute function */
    iret1 = pthread_create( &thread1, NULL, print_message, NULL);
    if (iret1) {
        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret1);
        return -1;
    }
    
    iret2 = pthread_create(&thread2, NULL, print_message, NULL);
    if (iret2) {
        fprintf(stderr,"Error - pthread_create() return code: %d\n",iret2);
        return -1;
    }
    
    printf("pthread_create() for thread 1 returns: %d\n",iret1);
    printf("pthread_create() for thread 2 returns: %d\n",iret2);

    /* Wait till threads are complete before main continues. */
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    return 0;
}
