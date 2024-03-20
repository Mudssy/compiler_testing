
#include <stdio.h>
#include <string.h>
#include <sanitizer/msan_interface.h>

int main() {
    char buffer[10] = "Test";
    __msan_check_mem_is_initialized(buffer, sizeof(buffer));
    printf("%.*s\n", 10, buffer);
    return 0;
}
