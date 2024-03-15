
#include <stdio.h>
#include <threads.h>

_Thread_local int counter = 0;

int increment(void) {
    return ++counter;
}

int main() {
    increment();
    printf("The value of the thread-local variable is: %d\n", counter);
    return 0;
}
