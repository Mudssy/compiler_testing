
#include <stdio.h>
#define MAX_SIZE 1024
int main() {
    typedef unsigned char byte;
    typedef struct {
        int a, b;
    } Pair;
    
    // testing for array of bytes and pairs
    byte bytes[MAX_SIZE] = {'a', 'b', 'c'};
    printf("Bytes: %s\n", bytes);
    
    Pair pair1 = {.a = 5, .b = 7}, pair2;
    pair2.a = pair1.b;
    pair2.b = pair1.a;
    
    printf("Pair 1: {%d, %d}\n", pair1.a, pair1.b);
    printf("Pair 2: {%d, %d}\n", pair2.a, pair2.b);
}
