
#include <stdio.h>

union Data {
   int i;
   float f;
};

int main() {
    union Data data;        

    printf("Memory size occupied by data : %lu\n", sizeof(data));

    return 0;
}
