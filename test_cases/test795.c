
#include <stdio.h>

int main() {
    int num = 10;
    
    // A label
    my_label:
    
    printf("Number is %d\n", num);
    
    if(num > 0) {
        num--;
        goto my_label;  // Jump to the label
    }

    return 0;
}
