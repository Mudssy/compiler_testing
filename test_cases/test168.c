
#include <assert.h>

int main() {
    static_assert(sizeof(int) == 4, "Expected int size is 4 bytes");
    
    printf("Static assertions have been tested.\n");

    return 0;
}
