
#include <stdio.h>
int main() {
    int i, j;
    for(i = 0; i < 100; i++){
        printf("Loop %d\n", i);
        j = i * 2; // this is an invariant expression that can be hoisted out of the loop by LICM
    }
    printf("%d\n", j);
    return 0;
}
