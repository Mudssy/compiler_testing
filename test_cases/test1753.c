
#include <stdio.h>
#include <string.h>

int main(void) {
    int ret;
    char buf[256];
    memset(buf, 0, sizeof(buf));
    
    __asm__(
        "movl $1234, %%eax\n\t"
        "movw %%ax, test_word\n\t"
        "movb %%al, test_byte\n\t"
        : [output] "=r"(ret)
        : [input1] "a"(0xFFFF), [input2] "d"(0xFF)
    );
    
    sprintf(buf, "Test byte: %hhd\n", test_byte);
    puts(buf);
    memset(buf, 0, sizeof(buf));
    sprintf(buf, "Test word: %hu\n", test_word);
    puts(buf);
    
    return ret;
}
