
#include <stdio.h>

void test_function(_Nullable int* x) {
    if (x != NULL) {
        printf("Value: %d\n", *x);
    } else {
        puts("Null");
    }
}

int main() {
    int a = 10;
    int b = 20;
    
    test_function(&a); // Test with non-null value
    test_function(NULL); // Test with null value
    
    return 0;
}
