
#include <stdatomic.h> // Provides atomic types and operations 
#include <stdio.h> 

int main() {
    _Atomic(int) a = 0;
    atomic_fetch_add(&a, 1); // Atomic increment operation
    
    printf("Value of a after fetch-and-add is: %d\n", a);
    return 0;
}
