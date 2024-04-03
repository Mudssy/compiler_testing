
#include <stdio.h>

void myFunction() {
    static int counter = 0;
    ++counter;
    printf("This function has been called %d times\n", counter);
}

int main() {
    for (int i=0;i<10;i++) {
        myFunction();
    }
    return 0;
}
