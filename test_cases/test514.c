
#include <stdlib.h>
#include <sanitizer/asan_interface.h>

__attribute__((noinline)) void asan_test() {
    int x[10];
    for (int i = 0; i < 10; i++) {
        x[i] = i * 2;
    }
    for (int i = 0; i < 10; i++) {
        if (x[i] != i * 2) {
            exit(1);
        }
    }
}

__attribute__((noinline)) void asan_test_invalid() {
    int x[5];
    for (int i = 0; i < 10; i++) {
        x[i] = i * 2;
    }
}

int main(void) {
    asan_test();
    asan_test_invalid();
    return 0;
}
