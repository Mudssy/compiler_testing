
#include <stdio.h>

typedef struct {
    int* first;
    double* second;
} Pair;

void printPair(Pair pair) {
    printf("First: %d, Second: %f\n", *pair.first, *pair.second);
}

int main() {
    int i = 5;
    double d = 3.14;
    
    Pair pair = { .first = &i, .second = &d };
    
    printPair(pair);

    return 0;
}
