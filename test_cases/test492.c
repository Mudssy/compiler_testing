
#include <stdio.h>
#include <pthread.h>

__thread int tls_var = 10;  // TLS variable

void *myThreadFun(void *vargp) {
    tls_var += 5;   // Accessing the thread-local variable
    printf("Print from Thread: %d\n", tls_var);
}

int main() {
    pthread_t thread_id1, thread_id2;
    
    printf("Before Thread: %d\n", tls_var);  // Print the value of tls_var before the threads are created.
  
    pthread_create(&thread_id1, NULL, myThreadFun, NULL);
    pthread_join(thread_id1, NULL);
    
    printf("After first thread execution: %d\n", tls_var);  // Print the value of tls_var after executing the first thread.
  
    pthread_create(&thread_id2, NULL, myThreadFun, NULL);
    pthread_join(thread_id2, NULL);
    
    printf("After both threads execution: %d\n", tls_var);  // Print the value of tls_var after executing both threads.
  
    return 0;
}
