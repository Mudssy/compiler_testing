
#include <stdio.h>
#include <stddef.h>

union MyUnion {
    int a;
    float b;
};

int main() {
    union MyUnion my_union = { .a = 10 };
    
    if (my_union.a == 10) {
        printf("Union Initialization feature works correctly.\n");
    } else {
        printf("Union Initialization feature failed.\n");
    }

    return 0;
}
