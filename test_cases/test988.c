
#include <stdio.h>

__attribute__((noinline)) void branch_target(int x) {
    printf("Branch Target %d\n", x);
}

void indirect_branch(int (*f)(int), int y) {
    fprintf(stderr, "Indirect Branch %d\n", y);
    
    if (y < 10) 
        f(10);
    else 
        f(20);
}

int main() {
    indirect_branch(&branch_target, 5);
    indirect_branch(&branch_target, 15);
    
    return 0;
}
