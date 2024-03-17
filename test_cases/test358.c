
#include <stdio.h>

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

void shuffleFunc() {
    int a = 5, b = 7, c = 9;
#pragma omp parallel sections
    {
        #pragma omp section
            for (int i = 0; i < 3; ++i) printf("Thread %d\n", fib(a + i));
        
        #pragma omp section
            for (int j = 0; j < 3; ++j) printf("Thread %d\n", fib(b + j));

        #pragma omp section
            for (int k = 0; k < 3; ++k) printf("Thread %d\n", fib(c + k));
    }
}

int main() {
#pragma omp parallel sections
    {
        #pragma omp section
            shuffleFunc();
        
        #pragma omp section
            shuffleFunc();
    }
    
    return 0;
}
