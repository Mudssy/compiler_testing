
#include <stdio.h>

void bar(int i) {
    // Add your logic here. This will get executed multiple times.
}

void foo() {
    for (int i = 0; i < 10000000; i++)    
        bar(i);                         
}

int main() {
    foo();                              
    return 0;                           // Return statement was missing. It is required in a C program to indicate that the program has finished executing successfully.
}
