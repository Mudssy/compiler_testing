
#include <stdio.h>

int main() {
    int x = 0;
    
    __builtin_trap();
    
    printf("This message should never be printed.\n");
    
    return 0;
}
