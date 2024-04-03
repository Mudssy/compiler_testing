
#include <stdio.h>

int main() {
    int i = 10;
    while (i) {
        printf("Hello World\n");
        if(!--i)  //Decrement the value of 'i' and check it is equal to zero or not
            break;  //Break out from loop when condition is met
    }
    return 0;
}
