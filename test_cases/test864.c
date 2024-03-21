
#include <stdio.h>
#include "llvm-c/Remarks.h"

int main(void) {
    char* buffer[] = {"Hello", "YAML", "World!!"};
    
    for (int i = 0; i < 3; i++) {
        printf("%s\n", buffer[i]);
    }
    
    return 0;
}
