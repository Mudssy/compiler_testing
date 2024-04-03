
#include <stdio.h>

#define MY_MACRO(x) printf("%d\n", x);

int main() {
    int i = 10;
    MY_MACRO(i + 5);  // This will print "15"
    return 0;
}
