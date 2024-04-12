
#include <stdio.h>

typedef struct __attribute__((serialized)) S {
    int x;
} S;

int main() {
    S s = {10};
    printf("Value of s.x is %d\n", s.x);
    
    return 0;
}
