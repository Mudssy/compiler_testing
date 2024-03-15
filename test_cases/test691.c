
#include <stdio.h>
#include <assert.h>

int main() {
    int a = 5;
    int b = 10;

    printf("a = %d, b = %d\n", a, b);
    assert(b > a);
    
    return 0;
}
