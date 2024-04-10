
#include <stdio.h>
#include <string.h>

const char* llvmlibc_test(void) {
    return "Test String"; // You can replace with your desired string
}

int main() {
    char buf[64];
    strncpy(buf, (char *)llvmlibc_test(), sizeof(buf));
    printf("%s\n", buf);
    return 0;
}
