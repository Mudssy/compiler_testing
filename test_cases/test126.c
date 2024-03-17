
#include <stdio.h>

#define DOUBLE(x) ((x) << 1)

int main() {
    printf("%d\n", DOUBLE(DOUBLE(DOUBLE(DOUBLE(DOUBLE(DOUBLE(DOUBLE(DOUBLE(2))))))));
    return 0;
}
