
#include <stdio.h>

__thread int tls_i;

void *threadFunc(void* args){
    tls_i = 1;
    printf("tls_i in thread 1 = %d \n", tls_i);
}

int main(){
    tls_i = 2;
    printf("tls_i in main before thread creation = %d \n", tls_i);
    
    pthread_t tid;
    pthread_create(&tid, NULL, threadFunc, NULL);
    pthread_join(tid, NULL);

    printf("tls_i in main after thread creation = %d \n", tls_i);
    
    return 0;
}
