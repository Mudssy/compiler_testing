
#include <stdio.h>

static int staticVar = 10;

static void staticFunction(void) {
    printf("Inside static function.\n");
    staticVar++;
}

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Call number: %d\n", i + 1);
        staticFunction();
        printf("Static variable value: %d\n\n", staticVar);
    }
    
    return 0;
}
