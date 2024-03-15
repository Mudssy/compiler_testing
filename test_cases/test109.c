
#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int array[n];

  for (int i = 0; i < n; ++i) {
    array[i] = i * 2;
  }

  for (int i = 0; i < n; ++i) {
    printf("array[%d] = %d\n", i, array[i]);
  }

  return 0;
}
