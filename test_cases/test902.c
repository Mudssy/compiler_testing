
#include <stdio.h>

int main() {
    int sum = 0;
    #pragma omp parallel for reduction(+:sum) schedule(static, 1)
    for (int i = 0; i < 10000; i++) {
        printf("Sum is %d\n", sum);
    }
    return 0;
}
