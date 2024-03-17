
#include <stdio.h>

typedef struct { int x; } IntWrapper;
typedef struct { double y; } DoubleWrapper;

template<typename T, typename U>
struct Pair {
    T first;
    U second;
};

void printPair(Pair<IntWrapper*, DoubleWrapper*> p) {
    printf("First: %d, Second: %f\n", p.first->x, p.second->y);
}

int main() {
    IntWrapper i = { .x = 10 };
    DoubleWrapper d = { .y = 5.5 };
    
    Pair<IntWrapper*, DoubleWrapper*> pair = { .first = &i, .second = &d };
    
    printPair(pair);
}
