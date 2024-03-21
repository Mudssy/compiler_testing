
#include <stdio.h>

int main() {
    int a = 10;
    auto increment_and_print = [a] () mutable { printf("%d\n", ++a); };
    for(int i=0;i<5;++i)
        increment_and_print();
    return 0;
}
