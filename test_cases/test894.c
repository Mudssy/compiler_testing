
#include <stdio.h>

int main() {
    const char **remarks = __llvmlibc_get_remarks();
    
    if (!remarks) {
        printf("Error getting remarks\n");
        return 1;
    }

    for (size_t i = 0; remarks[i]; ++i) {
        printf("%s\n", remarks[i]);
    }

    return 0;
}
