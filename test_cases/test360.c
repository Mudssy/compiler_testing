
#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    
    printf("Testing variable declarations:\n");

    a = 10;
    b = 20.5;
    c = 'A';

    if (a == 10 && b == 20.5f && c == 'A') {
        printf("Variable declarations and assignments are working properly.\n");
    } else {
        printf("There seems to be a problem with variable declarations and assignments.\n");
    }

    return 0;
}
