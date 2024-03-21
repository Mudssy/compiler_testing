
#include <stdio.h>

int main() {
    struct {
        int i;
        float f;
    } my_struct;  // Anonymous structure
    
    union {
        int i;
        float f;
    } my_union;   // Anonymous union

    my_struct.i = 10;
    my_struct.f = 98.6;
    
    printf("Value of the int in struct: %d\n", my_struct.i);
    printf("Value of the float in struct: %f\n", my_struct.f);

    my_union.i = 10;
    printf("Value of the int in union: %d\n", my_union.i);
    
    my_union.f = 98.6;
    printf("Value of the float in union: %f\n", my_union.f);

    return 0;
}
