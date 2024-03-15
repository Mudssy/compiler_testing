
#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;

void function(int x) {
    longjmp(buf, x);
}

int main() {
    int r = setjmp(buf);

    if (r == 0) {
        printf("First call\n");
        function(1);
    } else if (r == 1) {
        printf("Long jump called with parameter 1\n");
        function(2);
    } else if (r == 2) {
        printf("Long jump called with parameter 2\n");
    }

    return 0;
}
