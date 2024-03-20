
#include <stdio.h>

int __declspec(dllexport) my_function() {
    printf("Hello from my_function!\n");
    return 0;
}

int main() {
    my_function();
    return 0;
}
