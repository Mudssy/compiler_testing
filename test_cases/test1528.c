
#include <stdio.h>

int main(void) {
    char a __attribute__((aligned(16)));
    
    printf("Address of a: %p\n", &a);
    printf("Sizeof a: %zu\n", sizeof(a));
  
    return 0;
}
