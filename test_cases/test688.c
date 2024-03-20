
#include <stdio.h>

typedef enum {False = 0, True = 1} bool;

int main(void) {
    printf("%d\n", False); // Expected output: 0
    printf("%d\n", True);  // Expected output: 1
    return 0;
}
