
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;
    float b;
} TestStruct;

int main() {
    TestStruct *test_struct = (TestStruct *)malloc(sizeof(TestStruct));
    test_struct->a = 10;
    test_struct->b = 220.5;
    
    printf("Value of a: %d\n", (*test_struct).a);
    printf("Value of b: %.2f\n", (*test_struct).b);

    free(test_struct);
    return 0;
}
