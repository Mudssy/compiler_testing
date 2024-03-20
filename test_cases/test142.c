
#include <stdio.h>

typedef struct {
    int x;
    char y[10];
} SomeType;

int main() {
    SomeType var = {5, "Hello"};
    
    // index into type directly
    printf("x: %d\n", *(int*)(&var + 0));
    printf("y: %s\n", (char*)(&var + 1));
  
    return 0;
}
