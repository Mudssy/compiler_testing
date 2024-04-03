
#include <stdio.h>
#include <pthread.h>  // This library provides the POSIX thread (PThreads) API 

_Thread_local int testVar = 1;
void *myThread(void *vargp){ printf("Printing from Thread \n"); }
int main(){
    pthread_t thread_id;
    printf("Before Thread\n");
    pthread_create(&thread_id, NULL, myThread, NULL);  //Creates a new thread which executes 'myThread'
    pthread_join(thread_id, NULL);   //Makes the main thread wait for 'thread_id' to complete.
    printf("After Thread\n");
    return 0;
}
