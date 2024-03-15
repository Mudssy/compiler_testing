
#include <stdio.h>
#include <stdlib.h>

volatile int sharedVariable = 0;

void function_1() {
    for(int i = 0; i < 5; ++i) {
        sharedVariable++;
    }
}

void function_2() {
    for(int i = 0; i < 5; ++i) {
        sharedVariable--;
    }
}

int main() {
    int initialValue = sharedVariable;
    function_1();
    function_2();

    printf("Initial Value: %d\n", initialValue);
    printf("Final Value: %d\n", sharedVariable);
    
    return 0;
}
