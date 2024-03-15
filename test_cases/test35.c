
#include <stdio.h>

int main() {
    int x = 1;
    if (x == 1) {
        printf("Dead code path taken.\n");
    } else {
        printf("Unreachable statement executed.\n");
    }
    return 0;
}
