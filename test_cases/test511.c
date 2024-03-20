
#include <stdio.h>
#include <signal.h>

void handler(int signum) {
    void *arr[10];
    int size;
    size = __sanitizer_get_shadow_call_stack(__builtin_frame_address(0), arr, 10);

    for (int i = 0; i < size ; ++i) {
        printf("%p ", arr[i]);
    }
    printf("\n");
}

int main() {
    struct sigaction sa = {};
    sa.sa_handler = &handler;
    sa.sa_flags = SA_NODEFER;
    if (sigaction(SIGUSR1, &sa, NULL) == -1) return 0;

    // Trigger a signal
    raise(SIGUSR1);

    return 0;
}
