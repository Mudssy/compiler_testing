
#include <stdatomic.h>
#include <stdio.h>
#include <threads.h>

atomic_int acnt;

int thrd_equal(thrd_t t1, thrd_t t2) {
  return t1.id == t2.id;
}

int main() {
    thrd_t threads[5];
    for (int i = 0; i < 5; i++) {
        thrd_create(&threads[i], increment, NULL);
    }

    for (int i = 0; i < 5; i++) {
        thrd_join(threads[i], NULL);
    }

    printf("The final count is %d\n", atomic_load(&acnt));
    return 0;
}

void increment(void* arg) {
    for (int i = 0; i < 1000; ++i) {
        atomic_fetch_add(&acnt, 1);
    }
}
