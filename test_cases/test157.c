
#include <stdio.h>

void print_value(int v) {
    printf("%d\n", v);
}

void print_values(int values[10]) {
    for (int i = 0; i < 10; ++i) {
        print_value(values[i]);  // indexing function parameters
    }
}

int main() {
    int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_values(values);
    return 0;
}
