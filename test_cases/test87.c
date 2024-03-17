
#include <stdio.h>

int main() {
    int x = 0;

    goto check_point;   // using labels for the first time

    label1 : 
        printf("Hello\n");
        return 0;
    
    else:
        printf("World\n");
        return 0;

check_point:
    if (x)
        goto label1;    // using labels for the second time
    else 
        goto else;      // same with this
}
