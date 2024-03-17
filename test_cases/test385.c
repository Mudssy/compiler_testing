
#include <stdio.h>

void func1() {
    // Static variable in function, initialized only once
    static int x = 5; 
    x++;
    printf("x = %d\n", x);
}

int main() {
    func1(); // Output: "x = 6"
    func1(); // Output: "x = 7"
    return 0;
}
