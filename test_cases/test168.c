
#include <stdio.h>

void staticAssert(int condition) {
    switch (condition) {
        case 0: printf("Condition failed\n"); break;
        case 1: printf("Condition passed\n"); break;
    }
}

int main() {
    int x = 5;
    static_assert(x == 5, "Condition is not met."); // this will pass

    int y = 6;
    staticAssert(y == 5); // should fail and print "Condition failed"
    
    return 0;
}
