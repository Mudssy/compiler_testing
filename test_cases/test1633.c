
#include <stdio.h>
typedef int myInt;
myInt add(myInt x, myInt y) {
    return x + y;
}
int main() {
    myInt result = add(5, 10);
    printf("The result is: %d\n", result);
    return 0;
}
