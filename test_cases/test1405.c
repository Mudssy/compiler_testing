
#include <stdio.h>

const char *__llvm_profile_get_filename(void);

int main() {
    printf("%s\n", __llvm_profile_get_filename());
}
