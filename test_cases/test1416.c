
#include <stdio.h>

int count = 0;

void test(int n) {
    if (n == 0) return;
    ++count;
    printf("Entering recursion level %d\n", count);
    test(n-1);
    --count;
    printf("Exiting recursion level %d\n", count+1);
}

int main() {
    test(5);
    return 0;
}
