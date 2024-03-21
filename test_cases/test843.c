
#include <stdio.h>
#include <pthread.h>

// thread local storage variable
__thread int x; 
  
void *myThreadFun(void *vargp) {
    // set thread local storage value to thread id
    x = (int)pthread_self();
    printf("Hello from Thread-ID: %d, Value: %d\n", pthread_self(), x);
    return NULL;
}
  
int main() {
    // create 5 threads
    pthread_t tid[5];
    
    int i = 0;
    for (i = 0; i < 5; i++) 
        pthread_create(&tid[i], NULL, myThreadFun, NULL);
        
    // join all threads after creation
    for (i = 0; i < 5; i++)
        pthread_join(tid[i], NULL);
    
    return 0;
}
