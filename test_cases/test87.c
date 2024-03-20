
#include <stdio.h>

int main() {
    int x = 0; // assigning value to x

    if (x) 
        goto label1; // using goto to skip the else block
    else {
label2:
        printf("This is label2\n");
        return 0;
    }
    
    label1:
        printf("This is label1\n");
        return 0;
}
