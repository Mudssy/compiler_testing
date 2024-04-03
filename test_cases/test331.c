
#include <stdio.h>

typedef void (*BlockType)(void);

void my_block(void) {
    printf("Hello World\n");
}

int main(void) {
    BlockType b = &my_block;
    b(); // Call the function through the block
    return 0;
}
