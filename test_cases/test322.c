
#include <stdio.h>

int main() {
    static int classProperty = 5;
    printf("The value of the class property: %d\n", classProperty);
    return 0;
}
