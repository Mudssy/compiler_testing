
#include <stdio.h>

int main() {
    _Static_assert(sizeof(char) == 1, "Test message: sizeof(char) != 1");
    
    printf("Compiler supports _Static_assert and its value is %zu\n", sizeof(char));
    return 0;
}
