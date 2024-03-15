
#include <stdio.h>
#include <stdlib.h>
#include <exception>

void catch_func(int e) {
    printf("Caught an exception with value %d\n", e);
}

int main() {
    try {
        throw 42;
    } catch (int e) {
        catch_func(e);
    }
    
    return 0;
}
