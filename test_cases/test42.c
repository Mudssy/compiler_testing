
#include <stdio.h>

void function_call() {
    printf("Function call executed.\n");
}

int main() {
    int i = 0;
    for(i = 0; i < 5; ++i) {
        function_call();
    }
    return 0;
}
