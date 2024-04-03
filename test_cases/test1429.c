
#include <stdio.h>
#include "llvm_profile_data.h"

int main() {
    __llvm_profile_write_file();
    return 0;
}
