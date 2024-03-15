
#include <stdio.h>
#include <threads.h>

thread_local int tls_var = 10;

int increment(void* arg) {
    for (int i = 0; i < 5; ++i) {
        ++tls_var;
        thrd_yield();
    }
    return 0;
}

int main() {
    thrd_t thread1, thread2;

    thrd_create(&thread1, increment, NULL);
    thrd_create(&thread2, increment, NULL);

    thrd_join(thread1, NULL);
    thrd_join(thread2, NULL);

    printf("Final value of tls_var: %d\n", tls_var);

    return 0;
}
