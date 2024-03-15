
#include <stdio.h>

#define TEST_SECTION_CLANGINCLUDE

#ifdef TEST_SECTION_CLANGINCLUDE
    #include "clanginclude.h"

    int main() {
        printf("TEST_SECTION_CLANGINCLUDE is defined\n");
        return 0;
    }
#else
    int main() {
        printf("TEST_SECTION_CLANGINCLUDE is not defined\n");
        return 0;
    }
#endif
