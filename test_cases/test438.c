
#include <stdio.h>

struct Data {
    int size;
    double arr[];
};

int main() {
    struct Data d1 = {3, {1.0, 2.0, 3.0}};
    printf("The first element of the array is: %f\n", d1.arr[0]);
    return 0;
}
