
#include <stdio.h>

int main() {
    int x = 10;

    switch (x) {
        case 5:
            printf("Case label indentation feature is supported.\n");
            break;
        case 10:
            printf("Fallthrough case label indentation feature is also supported.\n");
            // No break here to test fallthrough behavior.
        case 11:
            printf("Indented case labels are working as expected.\n");
            break;
        default:
            printf("Case label indentation feature not supported.\n");
    }

    return 0;
}
