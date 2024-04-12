
#include <stdio.h>

void test_const() {
    const int a = 10;
    printf("Value of constant 'a': %d\n", a);
}

void test_volatile() {
    volatile int b = 20;
    // Uncomment the below line to see how changing 'b' will stop compiler optimization.
    // printf("Volatile: %d\n", b); 
}

int main(void) {
    test_const();
    test_volatile();
    return 0;
}
