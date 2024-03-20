
#include <stdio.h>
#include <omp.h>

int main() {
    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    long long sum = 0;
    
    #pragma omp parallel for reduction(+:sum)
    for (int i = 0; i < 10; ++i) {
        sum += data[i];
    }

    printf("Sum = %lld\n", sum); // Should print "Sum = 55"

    return 0;
}
