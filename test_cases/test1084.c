
#include <stdio.h>

typedef struct {
    char c;   // sizeof 1 byte
              // padding added to align int on 4 bytes boundary
    int i;    
} MyStruct;   // total size should be 8 bytes on a 32-bit system
              
int main() {
    printf("Size of MyStruct: %lu\n", sizeof(MyStruct));
    return 0;
}
