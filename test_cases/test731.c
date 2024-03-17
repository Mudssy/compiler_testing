
#include <stdio.h>
#include <threads.h>

_Thread_local int tls_var = 10;

int thread_func(void *arg) {
    printf("Initial value of TLS variable in thread: %d\n", tls_var);
    tls_var += 5;
    printf("Value of TLS variable after modification in thread: %d\n", tls_var);
    return 0;
}

int main() {
    thrd_t thread1, thread2;

    printf("Initial value of TLS variable in main: %d\n", tls_var);
    thrd_create(&thread1, thread_func, NULL);
    thrd_join(thread1, NULL);
    printf("Value of TLS variable after thread execution in main: %d\n", tls_var);

    return 0;
}
