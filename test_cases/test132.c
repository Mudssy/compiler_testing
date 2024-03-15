
#include <stdio.h>

typedef struct {
    int len;
    int data[];
} FlexArrayStruct;

int main() {
    FlexArrayStruct flexArray = {3, {1, 2, 3}};

    printf("Flexible array member test:\n");
    for (int i = 0; i < flexArray.len; ++i) {
        printf("flexArray[%d] = %d\n", i, flexArray.data[i]);
    }

    return 0;
}
