
#include <stdio.h>

int main() {
    int N = 1024;
    double a[N], b[N];
    int i;

    for (i = 0; i < N; i++) {
        a[i] = i * 1.0;
        b[i] = 0.0;
    }

#pragma acc parallel loop copy(a[:N],b[:N])
    for (i = 0; i < N; i++) {
        b[i] += a[i];
    }

    double sum = 0.0;
    for (i = 0; i < N; i++) {
        sum += b[i];
    }

    printf("The sum of the elements in the array is: %f\n", sum);

    return 0;
}
