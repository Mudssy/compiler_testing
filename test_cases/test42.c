
#include <stdio.h>

void func1() {
    printf("This is Function 1\n");
}

void func2(int a) {
    printf("Function 2 called with argument: %d\n", a);
}

int main() {
    int i = 0;

    for(i=0; i<5; i++){
        if (i%2 == 0)
            func1();
        else
            func2(i);
    }
    
    return 0;
}
