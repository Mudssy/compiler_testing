
#include <stdio.h>
#include <threads.h>
#include <stdatomic.h>

atomic_int count = 0;
mtx_t mtx;

void* thread_func(void *arg) {
    for (int i=0; i<1000000; ++i) {
        atomic_fetch_add(&count, 1);
    }
}

int main() {
    thrd_t threads[2];
    
    mtx_init(&mtx, mtx_plain);
    for (size_t i=0; i<2; ++i) {
        thrd_create(threads+i, thread_func, NULL);
    }
    for (size_t i=0; i<2; ++i) {
        thrd_join(threads[i], NULL);
    }
    
    printf("%d\n", count);  // should print 2000000 if no race condition occurs
}
