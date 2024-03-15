
#include <stdio.h>

typedef struct {
    int x;
} TestStruct;

int main() {
    TestStruct test = {10};
    TestStruct *test_ptr = &test;
    
    printf("Member access using ->: %d\n", test_ptr->x);
    
    return 0;
}
