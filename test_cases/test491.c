
#include <stdio.h>
int test_1();
int test_2();
int main() {
    printf("Starting tests\n");
    
    if (test_1()) {
        printf("Test 1 passed\n");
    } else {
        printf("Test 1 failed\n");
    }
    
    if (test_2()) {
        printf("Test 2 passed\n");
    } else {
        printf("Test 2 failed\n");
    }
    
    return 0;
}

int test_1() {
    int x = 5; // Change this to any number you like.
    if (x == 5) {
        return 1;
    } else {
        return 0;
    }
}

int test_2() {
    int x = 7; // Change this to any number you like.
    if (x == 7) {
        return 1;
    } else {
        return 0;
    }
}
