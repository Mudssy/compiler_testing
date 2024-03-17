
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = a + b + c;

    while (a > 0) {
        if (a < b && b == c) {
            printf("a is less than b and b equals c\n");
        } else {
            printf("a is not less than b or b does not equal c\n");
        }
        a--;
    }

    return 0;
}
