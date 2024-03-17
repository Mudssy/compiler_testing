
#include <stdio.h>

typedef struct {
    int x;
    char y[10];
} SomeType;

int main() {
    SomeType var = {5, "Hello"};
    
    // index into type directly
    printf("x: %d\n", *(int*)((char*)&var + 0));
    printf("y: ");
    for (int i = 0; i < 10; ++i) 
        printf("%c", ((char*)*(int*)((char*)&var + sizeof(int)))[i]);
    
    return 0;
}
