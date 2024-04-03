
#include <stdio.h>
#include <string.h>

extern void *llvmlibc_test(void);

int main() {
    char buf[64];
    strncpy(buf, (char *)llvmlibc_test(), sizeof(buf));
    printf("%s\n", buf);
    return 0;
}
