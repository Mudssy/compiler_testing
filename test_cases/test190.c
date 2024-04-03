
#include <stdio.h>

typedef struct { int *i; float *f;} MyStruct;

int main() {
    int i = 5, fi = 8;
    float f = 3.2f, ff = 4.5f;
    MyStruct s = { &i, &f }, fs = { &fi, &ff };

    printf("MyStruct s: {%d, %.1f}\n", *s.i, *s.f);
    printf("MyStruct fs: {%d, %.1f}\n", *fs.i, *fs.f);
    
    return 0;
}
