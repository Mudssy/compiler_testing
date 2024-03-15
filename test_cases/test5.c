
#include <stdio.h>

typedef struct {
  int x;
  float y;
} TestStruct;

union TestUnion {
  int a;
  float b;
};

enum Week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main() {
  TestStruct s = {10, 20.5};
  TestUnion u = {30};
  enum Week day = Wed;

  printf("Size of struct: %zu\n", sizeof(TestStruct));
  printf("Size of union: %zu\n", sizeof(u));
  printf("Size of enum: %zu\n", sizeof(day));

  return 0;
}
