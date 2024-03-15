
#include <stdio.h>
#include <sanitizer/common_interface_defs.h>

__attribute__((no_sanitize("address"))) void foo() {
  int x[10];
  printf("Element %d: %d\n", 5, x[5]);
}

int main() {
  __sanitizer_reset_coverage();
  foo();
  uint64_t coverage = __sanitizer_get_total_unique_coverage();
  printf("Coverage: %ld\n", coverage);
  return 0;
}
