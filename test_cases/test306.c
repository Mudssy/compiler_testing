
#include "forced_include.h"

int main() {
    if (TEST_FORCED_INCLUDE) {
        printf("Forced include file is working!\n");
    } else {
        printf("Forced include file not functioning.\n");
    }

    return 0;
}
