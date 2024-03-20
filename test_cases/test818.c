
#include <stdio.h>

void func() {
    static int i = 0;
    printf("The value of i is %d\n", i);
    i++;
}

int main() {
    func(); // should print "The value of i is 0"
    func(); // should print "The value of i is 1"
    return 0;
}
