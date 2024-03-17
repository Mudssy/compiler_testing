
#include <stdio.h>

typedef struct {
    int x;
} ClassName;

void functionName(ClassName *obj) {
    printf("Class declaration and function call are working correctly.\n");
}

int main() {
    ClassName obj;
    obj.x = 10;
    functionName(&obj);
    return 0;
}
