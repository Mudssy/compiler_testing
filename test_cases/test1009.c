
#include <stdio.h>

void print_output(int a) {
    printf("Input: %d\n", a);
}

int main() {
    int i = 1;
    for (int j = 0; j < 20; ++j, ++i) {
        if (j % 5 == 0 && i <= 8) {
            print_output(i);
        } else if (j >= 15 && i <= 12) {
            print_output(i);
        }
    }
    return 0;
}
