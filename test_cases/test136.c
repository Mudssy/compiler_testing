
#include <stdio.h>
#include <threads.h>

_Thread_local int tls_i = 10;

int run(void *arg) {
    if ((long)arg == 0) {
        printf("Hello from thread 0\n");
    } else {
        printf("Hello from non-main thread %ld\n", (long)arg);
    }
    
    return 0;
}

int main() {
    thrd_t threads[10];

    for (long i = 0; i < 10; ++i) {
        thrd_create(&threads[i], run, (void*)i);
    }

    run((void*) 0); // Main thread.

    for (int i = 0; i < 10; ++i) {
        thrd_join(threads[i], NULL);
    }
}
