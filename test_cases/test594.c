
#include <stdio.h>

int main() {
    int i;
    start:
    printf("start\n");
    for (i = 0; i < 5; ++i) {
        if (i == 3) {
            goto end;
        }
        printf("i: %d\n", i);
    }

    goto start;
    
end:
    printf("end\n");
    return 0;
}
