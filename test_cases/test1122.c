
#include <stdio.h>

int main() {
    int position[][2] = { [0 ... 4] = {0}, };
    printf("Sizeof position: %zu\n", sizeof(position));
    return 0;
}
