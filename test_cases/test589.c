
#include <stdio.h>

void print_output(int i) {
    switch (i) {
        case 1:
            printf("Output for Case 1\n");
            break;
        case 2:
            printf("Output for Case 2\n");
            break;
        default:
            printf("Default Output\n");
    }
}

int main() {
    int i = 0;
    START:
    print_output(i);
    i++;
    if (i < 3) goto START;
    return 0;
}
