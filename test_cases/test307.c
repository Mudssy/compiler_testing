
#include <stdio.h>

int main() {
    printf("This program is running in a %s environment.\n", 
        __STDC_HOSTED__ ? "hosted" : "freestanding");
    return 0;
}
