
#include <stdio.h>

int main(void) {
    char* buffer[3] = {"Hello", "YAML", "World!!"};
    
    for (int i = 0; i < 3; i++) {
        printf("%s\n", buffer[i]);
    }
    
    return 0;
}
