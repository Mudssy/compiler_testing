
#include <stdio.h>

int main() {
    int i;
    start:
    for (i = 0; i < 5; ++i) {
        switch (i) {
            case 0:
                printf("Case 0\n");
                continue;
            case 1:
                printf("Case 1\n");
                break;
            case 2:
                printf("Case 2\n");
                goto end;
            case 3:
                printf("Case 3\n");
                return 0;
        }
    }
    end:
    printf("End of program\n");
    return 0;
}
