
#include <stdio.h>
#include <sanitizer/asan_interface.h>

int main(void) {
  __asan_init();

  int arr[] = {1, 2, 3};

  // Test case for heap buffer overflow
  int *heapArr = (int*)malloc(sizeof(int) * 2);
  heapArr[2] = 0;
  
  // Test case for stack buffer overflow
  int stackArr[2];
  stackArr[2] = 0;
  
  return 0;
}
