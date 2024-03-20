
#include <stdio.h>

void printBool(char* name, int value) {
    printf("%s = %d\n", name, value != 0); // will convert to bool and then to int for printing
}

int main() {
    // Test cases
    printBool("0", 0);
    printBool("-1", -1);
    printBool("1", 1);
    return 0;
}
