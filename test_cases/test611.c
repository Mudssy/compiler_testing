
#include <stdio.h>

int main() {
    ((void (*)(*))(0))();
    
    return 0;
}
