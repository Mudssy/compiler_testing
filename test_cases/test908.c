
#include <stdio.h>
#include <threads.h>

int shared_var = 0;
mtx_t lock;

int unsafe_function(void) {
    int temp;

    mtx_lock(&lock);
    temp = shared_var;
    temp++;
    shared_var = temp;
    mtx_unlock(&lock);

    return temp;
}

int main(void) {
    thrd_t thread1, thread2;

    mtx_init(&lock, mtx_plain);

    thrd_create(&thread1, unsafe_function, NULL);
    thrd_create(&thread2, unsafe_function, NULL);

    thrd_join(thread1, NULL);
    thrd_join(thread2, NULL);

    mtx_destroy(&lock);

    printf("Shared variable: %d\n", shared_var);
    return 0;
}
