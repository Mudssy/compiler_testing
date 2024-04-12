
#include <stdio.h>

void print_label() {
    printf("Label reached\n");
}

int main(void) {
    void (*funcPtr)() = &print_label;
    goto label;
    
    funcPtr();
    return 0;
    
label:
    funcPtr();
    return 0;
}
