
#include <stdio.h>

__attribute__ ((noinline)) int __attribute__((optimize("O0"))) optimized_function() {
    return 1;
}

int main(void){
    printf("%d\n", optimized_function());
    
    return 0;
}
