
#include <stdio.h>
#include <threads.h>

int data = 0;
mtx_t lock;

int increment(void *arg) {
    mtx_lock(&lock);
    int tmp = data++;
    mtx_unlock(&lock);
    
    return tmp;
}

int main() {
    thrd_t thread1, thread2;

    mtx_init(&lock, mtx_plain);

    thrd_create(&thread1, increment, NULL);
    thrd_create(&thread2, increment, NULL);

    thrd_join(thread1, NULL);
    thrd_join(thread2, NULL);

    mtx_destroy(&lock);
    
    printf("Data: %d\n", data);

    return 0;
}
