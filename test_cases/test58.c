
#include <stdio.h>

void fun() {
    auto int var = 10;
    printf("Value inside fun(): %d\n", var);
}

int main() {
    auto int var = 20;
    printf("Value in the main function: %d\n", var);
    fun();
    return 0;
}
