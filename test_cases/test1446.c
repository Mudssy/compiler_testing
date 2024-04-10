
#include <stdio.h>

__attribute__((noinline))
void my_function() {
    for (int i = 0; i < 10000000; ++i) {}
}

int main() {
    printf("Before function call\n");
    my_function();
    printf("After function call\n");
    
    return 0;
}
