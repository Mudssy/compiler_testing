
#include <string.h>
int main() {
    char buffer[5];
    strcpy(buffer, "Hello, World!"); // This will cause a buffer overflow
    return 0; // To make sure the test case doesn't run forever
}
