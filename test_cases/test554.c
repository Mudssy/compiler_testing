
#include <stdio.h>

void func(int n) {
    int i;

    #pragma GCC optimize ("-Ofast") // Clang supports this too
    for (i=0; i<n*100000000; ++i);
}

int main() {
    func(5);
    return 0;
}
