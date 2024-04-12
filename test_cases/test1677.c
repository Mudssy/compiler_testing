
#include <stdio.h>
int main() {
    int i;
    for(i = 0; i < 5; ++i) {
        printf("%d\n", i);
        if (i == 2) {
            break;
        }
    }
    return 0;
}
