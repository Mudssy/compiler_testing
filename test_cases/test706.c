
#include <stdio.h>

void print_output(int n) {
    printf("Output: %d\n", n);
}

int main() {
    int i;

start:
    for (i = 0; i < 10; ++i) {
        if (i == 5) {
            goto end;
        }
        print_output(i);
    }
end:
    printf("Reached end.\n");

    return 0;
}
