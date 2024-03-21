
#include <stdio.h>

int main() {
    typedef enum {
        VALUE1,
        VALUE2,
        VALUE3
    } TestEnum;
    
    printf("The size of the enum is %d\n", sizeof(TestEnum));
    
    return 0;
}
