
#include <stdio.h>
#include <omp.h>

void test(int first, int last) {
    #pragma omp parallel for default(none), shared(first, last), schedule(static)
    for (int i = first; i <= last; ++i)
        printf("%d\n", i);
}

int main() {
    test(1, 20);
    return 0;
}
