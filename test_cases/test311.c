
#include <stdio.h>
#include <assert.h>

int main() {
    int i = 1;
    char *p = (char*)&i;

    if(p[0] == 1) {
        printf("Little endian\n");
    } else {
        printf("Big endian\n");
    }

    assert((*(int*)p) == i); // Strict aliasing violation, undefined behavior.
  
    return 0;
}
