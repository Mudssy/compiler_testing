
#include <stdio.h>

#ifdef __clang__
# define CLANG_SPECIFIC(x) x
#else
# define CLANG_SPECIFIC(x)
#endif

int main() {
    CLANG_SPECIFIC({
        printf("This is specific to clang\n");
    });
    
    return 0;
}
