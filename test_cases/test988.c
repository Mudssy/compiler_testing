
#include <stdio.h>

int main() {
    void *indirect_jump_table[] = {&&label1, &&label2, &&label3};
    
    goto *indirect_jump_table[0];

label1:
    printf("Executing label1\n");
    return 0;

label2:
    printf("Executing label2\n");
    return 0;

label3:
    printf("Executing label3\n");
    return 0;
}
