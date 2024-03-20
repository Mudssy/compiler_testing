
#include <stdio.h>
#include <stdlib.h>

struct TestStruct {
    int x;
};

int main(void) {
    struct TestStruct *s = malloc(sizeof(struct TestStruct));
    
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    } else {
        s->x = 5;
        printf("Memory allocation succeeded, struct x value is %d\n", s->x);
        free(s);
        return 0;
    }
}
