
#include <stdio.h>

typedef struct {
    int x;
} TestStruct;

__attribute__((constructor)) void before_main(void) {
    printf("Constructor Attribute: Before Main Function\n");
}

__attribute__((destructor)) void after_main(void) {
    printf("Destructor Attribute: After Main Function\n");
}

int main() {
    TestStruct ts = {5};
    printf("Main Function: Value of x is %d\n", ts.x);

    return 0;
}
