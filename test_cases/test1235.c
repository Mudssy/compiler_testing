
#include <stdio.h>

void function1(int param) {
    if (param == 0)
        exit(0); // Exit with status 0
    
    printf("Function 1\n");
}

void function2() {
    int x = 0;
    do {
        scanf("%d", &x);
        function1(x);
    } while (x != 0);
}

int main() {
    printf("Program started\n");
    function2();
    return 0;
}
