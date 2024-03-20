
#include <stdio.h>
#include <omp.h>  // OpenMP library

int main() {
    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int even_data[5], odd_data[5];
    
    #pragma omp parallel for
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            even_data[i/2] = data[i];
        } else {
            odd_data[(i-1)/2] = data[i];
        }
    }
    
    printf("Even numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", even_data[i]);
    }
    printf("\nOdd numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", odd_data[i]);
    }
    
    return 0;
}
