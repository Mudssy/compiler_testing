
#include <stdio.h>

int main(void) {
    #line 10 "test.c"
    printf("This line is on line %d of file %s\n", __LINE__, __FILE__);
    return 0;
}
