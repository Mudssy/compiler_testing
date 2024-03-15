
#include <stdio.h>

int static_var = 10;
__thread int thread_local_var = 20;

void update_vars(int a, int b) {
    static_var += a;
    thread_local_var += b;
}

int main() {
    int local_var = 30;
    
    printf("Before update: static_var=%d, thread_local_var=%d\n", static_var, thread_local_var);

    update_vars(5, 10);

    printf("After update: static_var=%d, thread_local_var=%d\n", static_var, thread_local_var);
    
    return 0;
}
