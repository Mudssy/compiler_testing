
#include <stdio.h>
#include <limits.h>
int main(void) {
    int x = INT_MIN;
    printf("%d is %s\n", x, (x & (1 << ((sizeof(int)*CHAR_BIT) - 1))) ? "signed" : "unsigned");
    return 0;
}
