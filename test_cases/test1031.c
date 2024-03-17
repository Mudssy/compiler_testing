
#include <stdio.h>

int main() {
    int result = 0;

    /* Test for brace wrapping in a class-like structure */
    typedef struct _TestStruct {
        int x;
    } TestStruct;

    TestStruct test_instance = {0};

    if (test_instance.x == 0) {
        result += 1;
    }

    /* Print the result to stdout */
    printf("Test Result: %d\n", result);

    return 0;
}
