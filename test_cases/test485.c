
#include <stdio.h>

void __attribute__((optimize("O"))) test_func() {
    // Specific code here for testing different optimizations
}

int main(void){
    printf("Starting...\n");
    test_func();
    printf("Finished!\n");
    return 0;
}
