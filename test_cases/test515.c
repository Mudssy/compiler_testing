
#include <stdio.h>
#include <sanitizer/dfsan_interface.h>

int main() {
    int x;
    dfsan_label x_label = dfsan_create_label("x", 0);
    dfsan_set_label(x_label, &x, sizeof(x));

    printf("Value of x: %d\n", x);
    
    return 0;
}
