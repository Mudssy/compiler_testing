
#include <stdio.h>

void print_int(int i) {
    printf("%d\n", i);
}

void print_float(float f) {
    printf("%.2f\n", f);
}

typedef void (*PrintFn)(void *arg);

struct PrintArgs {
    PrintFn fn;
    void *arg;
};

int main() {
    struct PrintArgs print_ints[] = {
        {(PrintFn)print_int, (void *)10},
        {(PrintFn)print_float, (void *)(float)20.5f}
    };

    for (size_t i = 0; i < sizeof(print_ints)/sizeof(print_ints[0]); ++i) {
        print_ints[i].fn(print_ints[i].arg);
    }

    return 0;
}
