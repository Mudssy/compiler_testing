
#include <stdio.h>

int main() {
    int i;
    
    printf("Testing 'For Loop' feature of llvm-build section in compiler:\n\n");
    
    // Test 1: Print numbers from 0 to 9
    for(i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Test 2: Print even numbers from 0 to 18
    for(i = 0; i <= 18; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    
    // Test 3: Print odd numbers from 1 to 19
    for(i = 1; i < 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
