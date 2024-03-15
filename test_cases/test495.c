
#include <stdio.h>
#include <threads.h>

int main(void) {
    printf("Testing Thread Safety Attributes in C\n");
    
    struct timespec sleep_time;
    sleep_time.tv_sec = 1;
    sleep_time.tv_nsec = 0;

    mtx_t mutex;
    mtx_init(&mutex, mtx_plain);

    thrd_start_t func = print_number;

    thrd_t threads[5];
    int i;
    for (i = 0; i < 5; ++i) {
        thrd_create(threads + i, func, (void *)(long long)i);
    }

    for (i = 0; i < 5; ++i) {
        thrd_join(threads[i], NULL);
    }

    mtx_destroy(&mutex);

    return 0;
}
