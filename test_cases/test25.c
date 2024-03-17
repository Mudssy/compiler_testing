
#include <stdio.h>

typedef struct {
    unsigned int field1 : 2;
    unsigned int field2 : 3;
} BitFields;

int main() {
    BitFields bf = {2, 5};
    
    printf("Bit Fields:\n");
    printf("field1: %u\n", bf.field1);
    printf("field2: %u\n", bf.field2);
    
    return 0;
}
