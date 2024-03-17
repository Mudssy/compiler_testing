
#include <stdio.h>

void print_sum(int count, ...) __attribute__((format(printf, 1, 2)));

void print_sum(int count, ...) {
    double sum = 0;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; ++i) {
        sum += va_arg(args, double);
    }

    va_end(args);
    printf("Sum: %.2f\n", sum);
}

int main() {
    print_sum(3, 1.0, 2.5, 3.8);
    return 0;
}
