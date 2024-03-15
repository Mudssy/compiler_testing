
#include <stdio.h>

typedef int (*func_ptr)(int, int);

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    func_ptr operations[] = {add, sub};
    int inputs[2][2] = {{5, 3}, {7, 2}};
    
    for (int i = 0; i < 2; ++i) {
        printf("Result of operation %d: %d\n", i + 1, operations[i](inputs[i][0], inputs[i][1]));
    }

    return 0;
}
