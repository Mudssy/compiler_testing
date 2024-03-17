
#include <stdio.h>
#include <iso646.h>  // for "and" operator

int main() {
    int i = 0;
    double *ptr1 = &i;  // create an incompatible pointer type
    char *ptr2 = (char *)&i;  // create a compatible pointer type
    
    if(__builtin_types_compatible_p(typeof(*ptr1), typeof(*ptr2))) {
        printf("Pointers are compatible.\n");
    } else {
        printf("Pointers are not compatible.\n");
    }

    return 0;
}
