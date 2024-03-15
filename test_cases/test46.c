
#include <stdio.h>

int llvmutilscount(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int a = 1, b = 10;
    int result = llvmutilscount(a, b);
    printf("Count of even numbers between %d and %d is: %d\n", a, b, result);
    return 0;
}
