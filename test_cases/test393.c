
#include <stdio.h>

int main() {
    int flag = 0;
    
    if (flag) {
        goto print_msg1;
    } else {
        goto print_msg2;
    }

print_msg1:
    printf("Goto statement used\n");
    return 0;

print_msg2:
    printf("Goto statement not used\n");
    return 0;
}
