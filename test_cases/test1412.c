
#include <stdio.h>

__attribute__((noinline)) int count_function(int x) {
    return x;
}

void inline_decision(int y) {
    if (count_function(__builtin_return_address(0)) == __LINE__) {
        printf("Inline decision taken for value: %d\n", y);
    } else {
        printf("No inline decision taken for value: %d\n", y);
    }
}

int main() {
    int x = 5;
    
    inline_decision(x);
    
    return 0;
}
