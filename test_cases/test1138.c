
#include <stdio.h>

int main() {
    int flag = 0;
    void check_label(void);

    check_label();

    if (flag == 1)
        printf("Success\n");
    else
        printf("Failed\n");
    
    return 0;
}

void check_label() {
start: // This is a label declaration.
    flag = 1;
    goto start; // Using the declared label.
}
