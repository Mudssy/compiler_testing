
#include "llvm/Support/FileCheck.h" // Assume llvm headers are available for compilation

int main() {
  int a = 5;
  if (a == 5) printf("Value of A is 5\n");
  
  FILE *f = fopen("output", "w+");
  fprintf(f, "Value of A: %d", a); // This line will be checked in FileCheck test
  fclose(f);
  
  if (__llvm_libc::FileCheck("Value of A: 5", "output") != 0) {
    printf("Test failed!\n");
    return -1;
  }
    
  printf("Test passed!\n");
  return 0;
}
