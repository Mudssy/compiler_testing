
#include <stdio.h>

void __attribute__((malloc)) foo(int n) {
    int *array = (int *)__builtin_alloca(n*sizeof(int));
    
    for(int i = 0; i < n; ++i) array[i] = i+1;
    
    for(int i = 0; i < n; ++i) printf("%d ", array[i]);
}

int main() {
    foo(5);

    return 0;
}
