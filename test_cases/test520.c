
#include <stdio.h>
#include <stdlib.h> 
#include <sanitizer/asan_interface.h>

int main(void) {
  int *heapArr = malloc(sizeof(int) * 2);
  
  if (heapArr == NULL) {
    printf("Failed to allocate memory\n");
    return -1;
  }
  
  heapArr[0] = 5;
  heapArr[1] = 6; // Corrected the index from 2 to 1.

  free(heapArr);

  return 0;
}
