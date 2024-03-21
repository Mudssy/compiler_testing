
#include <stdio.h>

int main() {
    printf("CHECK-NEXT: Hello\nCHECK-EMPTY:\nCHECK-NOT: Goodbye\n");
    return 0;
}
