
#include <stdio.h>

int __attribute__((pure)) pure_test(int x) {
    return 10; // some computation here
}

int main() {
    printf("Pure function\n");
    return 0;
}
