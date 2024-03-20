
#include <omp.h>
#include <stdio.h>

int main() {
  int sum = 0;
  #pragma omp parallel for reduction(+:sum)
  for (int i = 1; i <= 100; ++i) {
    sum += i;
  }
  
  printf("Sum of numbers from 1 to 100 is %d\n", sum);
  
  return 0;
}
