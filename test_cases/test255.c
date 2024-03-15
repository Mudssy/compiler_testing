
#include <stdio.h>

int main() {
    inline namespace N {
        int foo() {
            return 42;
        }
    };
    
    printf("The result of calling foo is %d\n", foo());
    return 0;
}
