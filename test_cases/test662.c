
#include <stdio.h>

int main() {
    int val = ({ 15; });
    printf("Value: %d\n", val);
    return 0;
}
