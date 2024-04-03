
#include <stdio.h>
#include <assert.h>

void test_error(int x) {
    assert(x >= 0); // This should pass
}

int main() {
    int y = -1;
    
    printf("Testing error handling:\n");
    test_error(y);

    return 0;
}
